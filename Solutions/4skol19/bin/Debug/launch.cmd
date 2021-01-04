@echo off
set APPLICATION=4skol19.exe

set BASEDIR=%~dp0
if not "x%1" == "x" set APPLICATION=%1

"%BASEDIR%%APPLICATION%"
pause