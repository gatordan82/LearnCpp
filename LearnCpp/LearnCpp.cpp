// LearnCpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	std::cout << "Hello World!" << std::endl;

	std::cin.clear();
	std::cin.ignore(32767, '\n');
	std::cin.get();

    return 0;
}

