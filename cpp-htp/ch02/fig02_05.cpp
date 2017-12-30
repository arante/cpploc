// fig02_05.cpp
// Addition program that displays the sum of two integers.
//
// Written by Billy Wilson Arante <arantebillywilson@gmail.com>
// Last updated on 2017/12/30 PHT

#include <iostream>

int main()
{
	int firstNumber;
	int secondNumber;
	int sum;

	std::cout << "Enter first number: ";
	std::cin >> firstNumber;

	std::cout << "Enter second number: ";
	std::cin >> secondNumber;

	sum = firstNumber + secondNumber;

	std::cout << "Sum is " << sum << std::endl;

	return 0;
}
