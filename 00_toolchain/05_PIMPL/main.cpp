#include <iostream>
#include "shape.hpp"


int main()
{
    Shape s;
    std::cout<<"Initial center: ("<< s.getCenterX() << "," << s.getCenterY() << ")\n";

    s.setCenter(3.0,4.0);
    std::cout<<"New center: ("<< s.getCenterX() << "," << s.getCenterY() << ")\n";

    return 0;
}