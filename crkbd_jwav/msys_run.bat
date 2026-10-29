@echo off
rem Runs one of the existing .sh scripts of this folder inside QMK MSYS (MINGW64),
rem unmodified, so Windows behaves like the Linux workflow.
rem   msys_run.bat compile_from_json.sh
rem   msys_run.bat flash.sh
rem   msys_run.bat get_compile_flash.sh
rem With no argument, opens an interactive QMK MSYS shell in this folder.
rem
rem Assumes the keymap is visible to QMK as keyboards\crkbd\keymaps\jwav
rem (see link_keymap.bat). HOME is pointed at %USERPROFILE% so that "~" means
rem C:\Users\<you> (as on Linux): ~/qmk_firmware, ~/Downloads, ...

setlocal
set "QMK_MSYS=C:\QMK_MSYS"
set "MSYSTEM=MINGW64"
set "HOME=%USERPROFILE%"
set "CHERE_INVOKING=1"
set "KEYMAP_DIR=%~dp0"
if "%KEYMAP_DIR:~-1%"=="\" set "KEYMAP_DIR=%KEYMAP_DIR:~0,-1%"

if not exist "%QMK_MSYS%\usr\bin\bash.exe" (
    echo QMK MSYS not found at %QMK_MSYS%
    exit /b 1
)

if "%~1"=="" (
    "%QMK_MSYS%\usr\bin\bash.exe" -l -i -c "cd \"$(cygpath -u \"$KEYMAP_DIR\")\" && exec bash -i"
    exit /b %errorlevel%
)

"%QMK_MSYS%\usr\bin\bash.exe" -l -c "cd \"$(cygpath -u \"$KEYMAP_DIR\")\" && ./%~1"
exit /b %errorlevel%
