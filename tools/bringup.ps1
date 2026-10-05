# Static-recomp bring-up loop.
#
# The guest still has entry points that codegen's static scan never discovers,
# so each launch surfaces one more as a FATAL "Call to invalid or unregistered
# function". This script repeatedly: runs the game, reads the trapping address,
# adds a [functions] override for it, regenerates, rebuilds and relaunches.
#
# The override end address is the next registered function above the trap, which
# is where the unknown function must end (codegen already split the segment
# there). Run with -MaxIterations to bound the work.

param(
    [int]$MaxIterations = 40,
    [int]$RunSeconds = 18
)

$ErrorActionPreference = 'Stop'

# tools/ is the script's home, so resolve the project one level up.
$projectDir = Split-Path $PSScriptRoot -Parent
$gameDir    = Split-Path $projectDir -Parent
$rexglue    = Join-Path $gameDir 'rexglue\win-amd64\bin\rexglue.exe'
$buildDir   = Join-Path $projectDir 'out\build\win-amd64-release'
$exe        = Join-Path $buildDir 'puzzlefighter.exe'
$logDir     = Join-Path $buildDir 'logs'
$manifest   = Join-Path $projectDir 'puzzlefighter_manifest.toml'
$overrides  = Join-Path $projectDir 'puzzlefighter_overrides.toml'
$gameRoot   = Join-Path $gameDir `
    '2B9E5C72730ECC3C082910C1530336A288DAA4F458_extracted'

$env:PATH = (Join-Path $gameDir 'ninja') + ';' +
            'C:\Program Files\LLVM\bin;' + $env:PATH

function Write-Step($msg) { Write-Host "==> $msg" }

function Get-RegisteredAddresses {
    # Addresses codegen currently emits into the dispatch table, ascending.
    $register = Join-Path $projectDir 'generated\default\puzzlefighter_register.cpp'
    $pattern  = 'SetFunction\(0x([0-9A-F]{8})'
    [regex]::Matches((Get-Content $register -Raw), $pattern) |
        ForEach-Object { [Convert]::ToUInt32($_.Groups[1].Value, 16) } |
        Sort-Object -Unique
}

function Add-Override([uint32]$address, [uint32]$end) {
    $entry = "`r`n# Auto-discovered entry point (unregistered guest function).`r`n" +
             "[functions.`"0x{0:X8}`"]`r`nparent = 0`r`nend = 0x{1:X8}" -f $address, $end
    Add-Content -Path $overrides -Value $entry -Encoding UTF8
}

function Invoke-Codegen {
    $p = Start-Process -FilePath $rexglue `
        -ArgumentList 'codegen', $manifest, '--ignore-stamp' `
        -RedirectStandardOutput (Join-Path $projectDir 'out\cg.out.log') `
        -RedirectStandardError  (Join-Path $projectDir 'out\cg.err.log') `
        -NoNewWindow -PassThru -Wait
    if ($p.ExitCode -ne 0) { throw "codegen failed (exit $($p.ExitCode))" }
}

function Invoke-Build {
    $p = Start-Process -FilePath 'cmake' -ArgumentList '--build', $buildDir `
        -RedirectStandardOutput (Join-Path $projectDir 'out\b.out.log') `
        -RedirectStandardError  (Join-Path $projectDir 'out\b.err.log') `
        -NoNewWindow -PassThru
    # A relink of the recomp library is slow; wait well past the tool timeout.
    if (-not $p.WaitForExit(600000)) {
        $p.Kill(); throw 'build timed out'
    }
    if ($p.ExitCode -ne 0) { throw "build failed (exit $($p.ExitCode))" }
}

function Invoke-Game([int]$seconds) {
    Get-ChildItem $logDir -Filter '*.log' -ErrorAction SilentlyContinue | Remove-Item -Force
    $proc = Start-Process -FilePath $exe -WorkingDirectory $buildDir `
        -ArgumentList @('--log-level','info','--gpu_plugin','xenos',
                        '--game_data_root', "`"$gameRoot`"",
                        '--xex_image', "`"$gameRoot\default.xex`"",
                        '--window_width','1280','--window_height','720') `
        -RedirectStandardOutput (Join-Path $projectDir 'out\game.out.log') `
        -RedirectStandardError  (Join-Path $projectDir 'out\game.err.log') `
        -NoNewWindow -PassThru

    Start-Sleep -Seconds $seconds
    $alive = -not $proc.HasExited
    if ($alive) { $proc.Kill(); $proc.WaitForExit() }

    $trap = $null
    Get-ChildItem $logDir -Filter '*.log' -ErrorAction SilentlyContinue | ForEach-Object {
        $m = Select-String -Path $_.FullName -Pattern 'unregistered function at guest address 0x([0-9A-Fa-f]+)'
        if ($m) { $trap = $m.Matches[0].Groups[1].Value }
    }
    [pscustomobject]@{ Survived = $alive; Trap = $trap }
}

# --- Preflight ------------------------------------------------------------

foreach ($required in @($rexglue, $exe, $manifest, $overrides, $gameRoot)) {
    if (-not (Test-Path $required)) { throw "Missing required path: $required" }
}

# --- Main loop -------------------------------------------------------------

Write-Step "Starting bring-up loop (max $MaxIterations iterations)"
$fixed = 0

for ($i = 1; $i -le $MaxIterations; $i++) {
    Write-Step "Iteration ${i}: launching"
    $run = Invoke-Game $RunSeconds

    if (-not $run.Trap) {
        if ($run.Survived) {
            Write-Step "No trap and the game is still running after ${RunSeconds}s - stopping."
            Write-Step "Bring-up complete. Applied $fixed override(s) this session."
            exit 0
        }
        Write-Step "Exited without a dispatch trap. Stopping for manual inspection."
        Get-Content (Join-Path $projectDir 'out\game.err.log') -Tail 40
        exit 1
    }

    $addr = [Convert]::ToUInt32($run.Trap, 16)
    Write-Step "Trapped at 0x$($run.Trap)"

    $registered = Get-RegisteredAddresses
    $next = $registered | Where-Object { $_ -gt $addr } | Select-Object -First 1
    if (-not $next) { Write-Step "No registered function above the trap; cannot infer an end."; exit 1 }

    if (($next - $addr) -gt 0x400) {
        Write-Step ("Implausible span to next function (0x{0:X}); stopping." -f ($next - $addr))
        exit 1
    }

    Add-Override $addr $next
    Write-Step ("Added override: 0x{0:X8} .. 0x{1:X8}" -f $addr, $next)

    Invoke-Codegen
    Invoke-Build
    $fixed++
}

Write-Step "Reached the iteration cap with $fixed override(s) applied."
exit 0
