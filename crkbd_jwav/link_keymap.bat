@echo off
rem Makes this folder visible to QMK as keyboards\crkbd\keymaps\jwav using a
rem directory junction (no admin rights needed). Nothing inside the folders is
rem modified. Safe to run repeatedly.
setlocal
set "SRC=%~dp0"
if "%SRC:~-1%"=="\" set "SRC=%SRC:~0,-1%"
set "DST=%USERPROFILE%\qmk_firmware\keyboards\crkbd\keymaps\jwav"

if exist "%DST%" (
    echo Already present: %DST%
    exit /b 0
)
mklink /J "%DST%" "%SRC%"
exit /b %errorlevel%
