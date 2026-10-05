@echo off
REM Detached launcher for run.ps1 so the capture timer is not bound to any
REM interactive shell timeout. Waits, screenshots, then stops the guest.
REM   tools\run_detached.cmd [seconds]
setlocal
set "SECONDS_ARG=%~1"
if "%SECONDS_ARG%"=="" set "SECONDS_ARG=40"
cd /d "%~dp0.."
powershell -NoProfile -ExecutionPolicy Bypass -File "tools\run.ps1" -Seconds %SECONDS_ARG% -Shot 1>"out\final_run.log" 2>"out\final_run.err.log"