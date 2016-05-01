#pragma once

#ifdef MYLIBRARY_EXPORTS
#define MYLIBRARY_API __declspec(dllexport) 
#else
#define MYLIBRARY_API __declspec(dllimport) 
#endif

class MyLib
{
public:
	static MYLIBRARY_API void print(int x);
};