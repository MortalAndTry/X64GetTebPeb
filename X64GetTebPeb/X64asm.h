#pragma once
#include<stdio.h>
#include<Windows.h>
extern "C" PVOID64 __cdecl GetTeb();
extern "C" PVOID64 __cdecl GetPeb(PVOID64 teb);