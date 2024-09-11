@echo off
setlocal

rem Set the compiler and source file
set COMPILER=gcc
set SOURCE=Yapper.c
set OUTPUT=Yapper.exe

rem Compile the source file
%COMPILER% %SOURCE% -o %OUTPUT%

rem Check if the compilation was successful
if %errorlevel% neq 0 (
    echo Compilation failed.
    exit /b %errorlevel%
)

rem Execute the compiled program
%OUTPUT%

endlocal