// exe02_18.cpp
// Comparing two integers.
//
// Written by Billy Wilson Arante <arantebillywilson@gmail.com>
// Last updated on 2018/01/01 PHT

#include <iostream>
using namespace std;

int main()
{
	int number1;
	int number2;

	cout << "Enter first number: ";
	cin >> number1;

	cout << "Enter second number: ";
	cin >> number2;

	if (number1 > number2)
		cout << number1 << " is larger." << endl;

	if (number1 < number2)
		cout << number2 << " is larger." << endl;

	if (number1 == number2)
		cout << "These numbers are equal." << endl;

	return 0;
}
