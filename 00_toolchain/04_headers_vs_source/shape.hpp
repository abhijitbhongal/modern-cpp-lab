#pragma once

//Refactor shape.hpp to use forward declaration

class Point;    // Forward declaration — much lighter than #include "point.hpp"

class  Shape{
    private:
    // Can't have `Point m_center;` because we only forward-declared it (Compiler needs size)
    // But we CAN have a pointer:
    Point* m_center;  // Wait — this requires manual memory management

    public:
    Shape(const Point& center); //takes by reference - only needs forward decl

    const Point& getCenter() const; //returns by reference - only needs forward decl
    void setCenter (const Point& p);
};