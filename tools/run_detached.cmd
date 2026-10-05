@echo off
REM Detached launcher for run.ps1 so the capture timer is not bound to any
REM interactive shell timeout. Waits, screenshots, then stops the guest.
REM   tools\run_detached.cmd [seconds] [resolution] [fullscreen]
REM e.g. tools\run_detached.cmd 40 1080p fullscreen
setlocal
set "SECONDS_ARG=%~1"
if "%SECONDS_ARG%"=="" set "SECONDS_ARG=40"
set "RES_ARG=%~2"
if "%RES_ARG%"=="" set "RES_ARG=1280x720"
set "FS_ARG="
if /i "%~3"=="fullscreen" set "FS_ARG=-Fullscreen"
cd /d "%~dp0.."
powershell -NoProfile -ExecutionPolicy Bypass -File "tools\run.ps1" -Seconds %SECONDS_ARG% -Resolution %RES_ARG% %FS_ARG% -Shot 1>"out\final_run.log" 2>"out\final_run.err.log"