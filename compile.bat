@echo off	
cls
set path=F:\MinGW\bin;F:\MinGW\msys\1.0\bin;C:\Windows
g++ -c Main.cpp String.cpp
g++ -o Main.exe Main.o String.o