// LearnCpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <bitset>
#include <iostream>

void waitForEnter()
{
	std::cin.clear();
	std::cin.ignore(32767, '\n');
	std::cin.get();
}

//
//int main()
//{
//	std::cout << "Hello World!" << std::endl;
//
//	int value{ 5 };
//
//	std::cout << "Value of value is: " << value << std::endl;
//	waitForEnter();
//	
//    return 0;
//}



// Note that with std::bitset, our options correspond to bit numbers, not bit patterns
const int option_1 = 0;
const int option_2 = 1;
const int option_3 = 2;
const int option_4 = 3;
const int option_5 = 4;
const int option_6 = 5;
const int option_7 = 6;
const int option_8 = 7;

//int main()
//{
//    std::bitset<8> bits(0x2); // we need 8 bits, start with bit pattern 0000 0010
//    bits.set(option_5); // set bit 4 to 1 (now we have 0001 0010)
//    bits.flip(option_6); // flip bit 5 (now we have 0011 0010)
//    bits.reset(option_6); // set bit 5 back to 0 (now we have 0001 0010)
//
//    std::cout << "Bit 4 has value: " << bits.test(option_5) << '\n';
//    std::cout << "Bit 5 has value: " << bits.test(option_6) << '\n';
//    std::cout << "All the bits: " << bits << '\n';
//
//    waitForEnter();
//
//    return 0;
//}