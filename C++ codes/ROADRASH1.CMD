Title CGN GameLoader
@echo off
cls
echo.
echo.
echo          ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออป
echo          บ           Technical notes concerning this game         บ
echo          ฬออออออออออออออออออออออออออออออออออออออออออออออออออออออออน
echo          บ  We strongly suggest to close all applications before  บ
echo          บ  you proceed. This is due the fact that explorer.exe   บ
echo          บ  will be closed during gameplay to solve display       บ
echo          บ  issues when using Windows Vista or Windows 7.         บ
echo          บ                                                        บ
echo          บ  Kind regards,                                         บ
echo          บ  The CGN Crew                                          บ
echo          บ  www.classic-gaming.net                                บ
echo          ฬออออออออออออออออออออออออออออออออออออออออออออออออออออออออน
echo          บ  Ps. Just ignore the language error :-), have fun!     บ
echo          ศออออออออออออออออออออออออออออออออออออออออออออออออออ[CGN]อผ
echo.
echo.
pause
cls
taskkill /f /im explorer.exe
cls
ROADRASH.EXE
cls
start explorer.exe
exit