// fig02_13.cpp
// Comparing integers using if statements, relational operators, and equality operators.
//
// Written by Billy Wilson Arante <arantebillywilson@gmail.com>
// Last updated on 2017/12/30 PHT

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int firstNumber;
	int secondNumber;

	cout << "Enter two numbers to compare: ";
	cin >> firstNumber >> secondNumber;

	if (firstNumber == secondNumber)
		cout << firstNumber << " == " << secondNumber << endl;

	if (firstNumber != secondNumber)
		cout << firstNumber << " != " << secondNumber << endl;

	if (firstNumber < secondNumber)
		cout << firstNumber << " < " << secondNumber << endl;

	if (firstNumber > secondNumber)
		cout << firstNumber << " > " << secondNumber << endl;

	if (firstNumber <= secondNumber)
		cout << firstNumber << " <= " << secondNumber << endl;

	if (firstNumber >= secondNumber)
		cout << firstNumber << " >= " << secondNumber << endl;

	return 0;
}
