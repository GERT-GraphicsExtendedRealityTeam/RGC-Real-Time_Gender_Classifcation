@echo off
rem
rem This file is generated by the Qt installer
rem

echo Setting up a Qt environment...

set QTDIR=C:\Qt\4.8.4
echo -- QTDIR set to C:\Qt\4.8.4
set PATH=C:\Qt\4.8.4\bin;%PATH%
echo -- Added C:\Qt\4.8.4\bin to PATH
set QMAKESPEC=win32-msvc2010
echo -- QMAKESPEC set to "win32-msvc2010"

if not "%1"=="vsvars" goto ENDVSVARS
call "C:\Program Files (x86)\Microsoft Visual Studio 10.0\VC\vcvarsall.bat" x86
:ENDVSVARS

if not "%1"=="vsstart" goto ENDVSSTART
call "C:\Program Files (x86)\Microsoft Visual Studio 10.0\VC\vcvarsall.bat" x86
devenv /useenv
:ENDVSSTART

