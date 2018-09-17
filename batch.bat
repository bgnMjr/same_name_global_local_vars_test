@echo off
set PROJ=same_name_global_local_vars_test
cmd.exe /K "cd /d D:\Docs\C++\%PROJ% && g++ %PROJ%.cpp -o %PROJ% && %PROJ%.exe"