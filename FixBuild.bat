@echo off
echo Attempting to fix UE5.6 TOptional compilation issues...

REM Try to rebuild only the SocialGolf module
echo Building SocialGolf module...
"D:\Main System\Unreal Engine\UE_5.6\Engine\Build\BatchFiles\Build.bat" SocialGolf Win64 Development -Project="%~dp0SocialGolf.uproject" -Verbose

if %ERRORLEVEL% NEQ 0 (
    echo Build failed, trying clean rebuild...
    "D:\Main System\Unreal Engine\UE_5.6\Engine\Build\BatchFiles\Rebuild.bat" SocialGolf Win64 Development -Project="%~dp0SocialGolf.uproject" -Clean
)

echo Build process completed.
pause