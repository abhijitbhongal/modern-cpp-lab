//distance.cpp
#include "distance.hpp"
#include <cmath>

double distance (const Point&a, const Point& b)
{
    double dx= a.getX()-b.getX();
    double dy= a.getY()-b.getY();
    return std::sqrt(dx*dx + dy*dy);
}
