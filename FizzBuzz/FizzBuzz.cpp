// FizzBuzz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
void fizz(int input);
int main()
{
	for (int c = 0; c <= 100; c++) {
		fizz(c);
	}
}
void fizz(int input) {
	bool isBuzzable = false;
	if (input % 3 == 0) {
		std::cout << "fizz";
		isBuzzable = true;
	}
	if (input % 5 == 0) {
		std::cout << "buzz";
		isBuzzable = true;
	}
	if (isBuzzable) {
		std::cout << std::endl;
	}
	else {
		std::cout << input << std::endl;
	}
}