#include "shape.hpp"
#include "point.hpp"  // Full include in .cpp file — that's OK!

Shape::Shape(double cx, double cy) 
{
    m_center = new Point(cx,cy);  // We need full Point definition here
}

Shape::~Shape()
{
    delete m_center;
}

double Shape::getCenterX() const
{
    return m_center->getX(); // Need full definition here too
}

double Shape::getCenterY() const
{
    return m_center->getY();
}

void Shape::setCenter(double cx, double cy)
{
    delete m_center;
    m_center = new Point(cx, cy);
}