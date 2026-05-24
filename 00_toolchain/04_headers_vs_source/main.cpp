#include "shape.hpp"
//Note: We dont include <iostream> directly, yet it works....

int main() {
    
    Point p(3.0, 4.0);
    Shape s(p);

    s.getCenter().print();  // Works because shape.hpp transitively included <iostream>
    return 0;
}