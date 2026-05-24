#pragma once
#include "point.hpp" // pulls in <iostream> transitively

class  Shape{
    private:
        Point m_center; // value member — needs full type
        
    public:
        Shape(const Point& center):m_center(center) {}

        const Point& getCenter() const { return m_center; }
        void setCenter(const Point& p) { m_center = p; }
};