/* fig18_03.cpp
 * Using inline function to calculate volume of cubes.
 *
 * Written by Billy Wilson Arante <arantebillywilson@gmail.com>
 * Last updated on 2017/12/18 PHT
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

inline double cube(const double side) {
        return side * side * side;
}

int main() {
        double side_value;
        
        for (int i = 0; i < 3; i++) {
                cout << "Enter the side length of your cube: ";
                cin >> side_value;
                cout << "Volume of cube with side " << side_value << " is "
                        << cube(side_value) << endl;
        }

        return 0;
}
