Title CGN GameLoader
@echo off
cls
echo.
echo.
echo          浜様様様様様様様様様様様様様様様様様様様様様様様様様様様融
echo          �           Technical notes concerning this game         �
echo          麺様様様様様様様様様様様様様様様様様様様様様様様様様様様郵
echo          �  We strongly suggest to close all applications before  �
echo          �  you proceed. This is due the fact that explorer.exe   �
echo          �  will be closed during gameplay to solve display       �
echo          �  issues when using Windows Vista or Windows 7.         �
echo          �                                                        �
echo          �  Kind regards,                                         �
echo          �  The CGN Crew                                          �
echo          �  www.classic-gaming.net                                �
echo          麺様様様様様様様様様様様様様様様様様様様様様様様様様様様郵
echo          �  Ps. Just ignore the language error :-), have fun!     �
echo          藩様様様様様様様様様様様様様様様様様様様様様様様様�[CGN]夕
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