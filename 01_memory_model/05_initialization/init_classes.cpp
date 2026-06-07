#include <iostream>

class Point {
public:
    Point() {
        std::cout << "  Default ctor\n";
    }
    Point(double x, double y) : m_x(x), m_y(y) {
        std::cout << "  Two-arg ctor: (" << x << ", " << y << ")\n";
    }

private:
    double m_x = 0.0;
    double m_y = 0.0;
};

int main() {
    std::cout << "Default init:\n";
    Point p1;            // Default constructor

    std::cout << "Value init:\n";
    Point p2{};          // Default constructor (same effect here)

    std::cout << "Direct init:\n";
    Point p3(3.0, 4.0);  // Two-arg constructor

    std::cout << "Copy init:\n";
    Point p4 = Point(5.0, 6.0);  // Two-arg, then copy (often elided)

    std::cout << "List init:\n";
    Point p5{7.0, 8.0};  // Two-arg constructor

    return 0;
}