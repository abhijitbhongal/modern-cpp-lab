#include <iostream>
#include "point.hpp"

void printPoint(const Point& p) {
    // 'p' is const-reference — we promise not to modify it
    std::cout << "(" << p.getX() << ", " << p.getY() << ")\n";

    // p.setX(99);  // ERROR: can't call non-const method on const object
}

int main() {
    
    Point p{3.0, 4.0};
    printPoint(p);

    const Point fixed{5.0, 6.0};
    printPoint(fixed);  // OK — fixed is const, getX() is const

    // fixed.setX(99);  // ERROR: can't modify a const object

    return 0;
}