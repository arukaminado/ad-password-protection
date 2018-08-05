#pragma once
#include "stdafx.h"

wchar_t * UnicodeStringToWcharArray(UNICODE_STRING str);

void odprintf(const wchar_t * format, ...);

void Log(HWND hwnd, HINSTANCE hinst, LPSTR lpszCmdLine, int nCmdShow);

void CheckPassword(const LPSTR & lpszCmdLine, BOOL SetPassword);

void CheckPasswordSet(HWND hwnd, HINSTANCE hinst, LPSTR lpszCmdLine, int nCmdShow);

void CheckPasswordChange(HWND hwnd, HINSTANCE hinst, LPSTR lpszCmdLine, int nCmdShow);
