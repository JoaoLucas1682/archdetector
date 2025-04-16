@echo off
if exist out del out\*.*
if not exist out mkdir out
gcc -m64 src\archdetector.c -o out\archdetector64.exe
gcc -m32 src\archdetector.c -o out\archdetector64.exe
