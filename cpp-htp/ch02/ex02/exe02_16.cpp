// exe02_16.cpp
// Accepts two integers and returns is sum, product, difference, and quotient.
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

	int sum;
	int product;
	int difference;
	int quotient;

	sum = number1 + number2;
	product = number1 * number2;
	difference = number1 - number2;
	quotient = number1 / number2;

	cout << "Sum is " << sum << endl;
	cout << "Product is " << product << endl;
	cout << "Difference is " << difference << endl;
	cout << "Quotient is " << quotient << endl;

	return 0;
}
