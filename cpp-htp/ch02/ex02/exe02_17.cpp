// exe02_17.cpp
// Display number 1 to 4 separated by whitespace in three possible ways.
//
// Written by Billy Wilson Arante <arantebillywilson@gmail.com>
// Last updated on 2018/01/01 PHT

#include <iostream>
using namespace std;

int main()
{
	cout << "1 2 3 4" << endl;

	cout << "1 " << "2 " << "3 " << "4" << endl;

	cout << "1 ";
	cout << "2 ";
	cout << "3 ";
	cout << "4" << endl;

	return 0;
}
