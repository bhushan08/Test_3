#pragma once
#include <Windows.h>
#ifdef MATHLIBRARY_EXPORTS
#define MATHLIBRARY_API __declspec(dllexport) 
#else
#define MATHLIBRARY_API __declspec(dllimport) 
#endif

extern "C" MATHLIBRARY_API int Add(int a, int b);

extern "C" MATHLIBRARY_API int Sub(int a, int b);

extern "C" MATHLIBRARY_API int Multiply(int a, int b);
