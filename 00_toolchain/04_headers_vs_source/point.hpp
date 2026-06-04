#pragma once
#include <iostream> // Heavy include — pulls in lots of code

class Point {
    private:
    double m_x;
    double m_y;

    public:
    Point(double x, double y): m_x(x), m_y(y) {}

    double getX() const { return m_x; }
    double getY() const { return m_y; }

    void print() const { std::cout<< "(" << m_x << "," << m_y << ")\n"; }
};
