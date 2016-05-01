// MyLibrary.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include <iostream>
#include "MyLibrary.h"

void MyLib::print(int x)
{
	std::cout << x << std::endl;
}



