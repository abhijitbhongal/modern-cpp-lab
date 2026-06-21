#include "point.hpp"
#include <cmath>

Point::Point() : m_x(0.0), m_y(0.0) {}

Point::Point(double x, double y) : m_x(x), m_y(y) {}

double Point::getX() const 
{ 
    return m_x; 
}

double Point::getY() const 
{
     return m_y; 
}

void Point::setX(double x) 
{ 
    m_x = x; 
}

void Point::setY(double y) 
{ 
    m_y = y; 
}


double Point::distanceTo(const Point& other) const 
{
    double dx = other.m_x - m_x;
    double dy = other.m_y - m_y;
    return std::sqrt(dx * dx + dy * dy);
}

void Point::move(double dx, double dy) 
{
    m_x += dx;
    m_y += dy;
}