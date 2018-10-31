#include "Sodacan.hpp"

double Sodacan::get_surface_area(){
    double s_a = (2 * M_PI * radius * height) + (2 * M_PI * pow(radius, 2));
    return s_a;
}
double Sodacan::get_volume(){
    double v = M_PI * pow(radius, 2) * height;
    return v;
}
