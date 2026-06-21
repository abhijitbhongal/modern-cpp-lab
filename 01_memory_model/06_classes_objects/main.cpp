#include <iostream>
#include "point.hpp"


int main()
{
    Point origin;
    Point target(3.0, 4.0);

    std::cout << "Origin: (" << origin.getX() << ", " << origin.getY() << ")\n";
    std::cout << "Target: (" << target.getX() << ", " << target.getY() << ")\n";

    double dist = origin.distanceTo(target);
    std::cout << "Distance: " << dist << "\n";

    origin.move(1.0, 2.0);
    std::cout << "Moved origin: (" << origin.getX() << ", " << origin.getY() << ")\n";

    return 0;
}