/*
 Implement a class SodaCan with functions get_surface_area() and get_volume(). In the constructor, supply the height and radius of the can.
 */
#include <iostream>
#include "Sodacan.hpp"

int main(int argc, const char * argv[]) {
    Sodacan s(9.0, 4.0);
    cout << "s surface area: " << s.get_surface_area() << endl;
    cout << "s volume: " << s.get_volume() << endl;
    return 0;
}
