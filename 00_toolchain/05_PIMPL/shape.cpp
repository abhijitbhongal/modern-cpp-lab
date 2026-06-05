#include "shape.hpp"
#include "point.hpp"
#include <vector>
#include <string>

class Shape::ShapeImpl 
{
    public:
        Point center;
        std::vector<Point> vertices;
        std::string name;
};

Shape::Shape():m_pImpl(new ShapeImpl()) {}
Shape::~Shape() { delete m_pImpl;}

void Shape:: setCenter (double x, double y) 
{
    m_pImpl->center = Point(x,y);
}

double Shape:: getCenterX() const 
{
    return m_pImpl->center.getX();
}

double Shape::getCenterY() const 
{
    return m_pImpl->center.getY();
}