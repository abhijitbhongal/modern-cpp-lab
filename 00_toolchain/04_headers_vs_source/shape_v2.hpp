#pragma once

class Point; // Forward declaretion - no #include needed!

class Shape 
{
    private:
    Point* m_center;

    public:
    Shape(double cx, double cy); //takes raw double, not Point - header stays light
    ~Shape();

    double getCenterX() const;
    double getCenterY() const;

    void setCenter(double cx, double cy);
};