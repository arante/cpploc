/* fig18_01.cpp
 * Addition of two integers.
 *
 * Written by Billy Wilson Arante <arantebillywilson@gmail.com>
 * Last updated on 2017/12/18 PHT
 */

#include <iostream>

int main() {
        int number1;
        std::cout << "Enter first integer: ";
        std::cin >> number1;

        int number2;
        std::cout << "Enter second integer: ";
        std::cin >> number2;

        int sum;
        sum = number1 + number2;

        std::cout << "Sum is " << sum << std::endl;

        return 0;
}
