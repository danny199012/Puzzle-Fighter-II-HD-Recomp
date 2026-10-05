# Launch the recompiled Puzzle Fighter HD with the bring-up settings that are
# known to work: the Xenos GPU plugin, the extracted game data root, and a
# matched guest video mode / window size.
#
#   .\tools\run.ps1                        # launch interactively
#   .\tools\run.ps1 -Resolution 720p       # guest mode + window preset
#   .\tools\run.ps1 -Seconds 30 -Shot     # run headless-ish, then screenshot
#   .\tools\run.ps1 -Fullscreen

param(
    [string]$Resolution = '1280x720',
    [int]$Seconds = 0,        # 0 = run until killed
    [switch]$Fullscreen,
    [switch]$Shot,            # capture out\shot.png before exiting
    [switch]$Trace            # verbose logging
)

$ErrorActionPreference = 'Stop'

$projectDir = Split-Path $PSScriptRoot -Parent
$gameDir    = Split-Path $projectDir -Parent
$buildDir   = Join-Path $projectDir 'out\build\win-amd64-release'
$exe        = Join-Path $buildDir 'puzzlefighter.exe'
$gameRoot   = Join-Path $gameDir `
    '2B9E5C72730ECC3C082910C1530336A288DAA4F458_extracted'

if (-not (Test-Path $exe)) { throw "Build first - missing $exe" }
if (-not (Test-Path $gameRoot)) { throw "Missing game data root: $gameRoot" }

$appArgs = @(
    '--log-level', $(if ($Trace) { 'trace' } else { 'info' }),
    '--gpu_plugin', 'xenos',
    '--resolution', $Resolution,
    '--game_data_root', "`"$gameRoot`"",
    '--xex_image', "`"$gameRoot\default.xex`""
)
if ($Fullscreen) { $appArgs += '--fullscreen' }

Write-Host "==> Launching puzzlefighter ($Resolution)"
$proc = Start-Process -FilePath $exe -WorkingDirectory $buildDir `
    -ArgumentList $appArgs -PassThru

if ($Seconds -gt 0) {
    Start-Sleep -Seconds $Seconds
    if (-not $proc.HasExited) {
        if ($Shot) {
            $shotPath = Join-Path $projectDir 'out\shot.png'
            Add-Type -AssemblyName System.Drawing
            Add-Type @'
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using System.Text;

public class Win {
    public delegate bool EnumProc(IntPtr h, IntPtr l);
    [DllImport("user32.dll")] public static extern bool EnumWindows(EnumProc cb, IntPtr l);
    [DllImport("user32.dll")] public static extern uint GetWindowThreadProcessId(IntPtr h, out uint pid);
    [DllImport("user32.dll")] public static extern bool IsWindowVisible(IntPtr h);
    [DllImport("user32.dll")] public static extern int GetWindowText(IntPtr h, StringBuilder s, int n);
    [DllImport("user32.dll")] public static extern bool GetClientRect(IntPtr h, out RECT r);
    [DllImport("user32.dll")] public static extern bool ClientToScreen(IntPtr h, ref POINT p);
    [DllImport("user32.dll")] public static extern bool PrintWindow(IntPtr h, IntPtr dc, uint f);
    [StructLayout(LayoutKind.Sequential)] public struct RECT { public int L, T, R, B; }
    [StructLayout(LayoutKind.Sequential)] public struct POINT { public int X, Y; }

    // Locate the main visible window belonging to a given process id.
    public static IntPtr FindByPid(uint wanted) {
        IntPtr found = IntPtr.Zero;
        EnumWindows(delegate(IntPtr h, IntPtr l) {
            uint pid; GetWindowThreadProcessId(h, out pid);
            if (pid == wanted && IsWindowVisible(h) && GetWindowText(h, new StringBuilder(256), 256) > 0) {
                found = h; return false;
            }
            return true;
        }, IntPtr.Zero);
        return found;
    }
}
'@
            $h = [Win]::FindByPid([uint32]$proc.Id)
            if ($h -ne [IntPtr]::Zero) {
                # Capture the CLIENT area so the image is exactly the guest framebuffer.
                $r = New-Object Win+RECT
                [void][Win]::GetClientRect($h, [ref]$r)
                $o = New-Object Win+POINT
                [void][Win]::ClientToScreen($h, [ref]$o)
                $w = $r.R; $ht = $r.B
                $bmp = New-Object Drawing.Bitmap $w, $ht
                $g = [Drawing.Graphics]::FromImage($bmp)
                # PW_RENDERFULLCONTENT (2) captures composited GPU/D3D content.
                [void][Win]::PrintWindow($h, $g.GetHdc(), 2)
                $g.Dispose()
                $bmp.Save($shotPath, [Drawing.Imaging.ImageFormat]::Png)
                $bmp.Dispose()
                Write-Host "==> Saved $shotPath ($w x $ht)"
            } else {
                Write-Host '==> Window handle not found; no screenshot.'
            }
        }
        Stop-Process -Id $proc.Id -Force
    }
} else {
    Write-Host "==> Running. Close the window to exit. PID $($proc.Id)"
}