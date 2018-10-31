/*
 Implement a class SodaCan with functions get_surface_area() and get_volume(). In the constructor, supply the height and radius of the can.
 */

#ifndef Sodacan_hpp
#define Sodacan_hpp

#include <stdio.h>
#include <cmath>

using namespace std;

class Sodacan{
public:
    Sodacan(): height(0), radius(0){};
    Sodacan(double h, double r): height(h), radius(r){};
    double get_surface_area();
    double get_volume();
private:
    double height, radius;
};

#endif /* Sodacan_hpp */
