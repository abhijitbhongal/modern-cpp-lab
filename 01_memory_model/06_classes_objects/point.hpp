#pragma once

class Point 
{
    private:
    double m_x;
    double m_y;

    public:
        // Constructors
        Point();                          // Default
        Point(double x, double y);        // Two-arg

        // Accessors (getters)
        double getX() const;
        double getY() const;

        // Mutators (setters)
        void setX(double x);
        void setY(double y);

        // Behavior
        double distanceTo(const Point& other) const;
        void move(double dx, double dy);
};