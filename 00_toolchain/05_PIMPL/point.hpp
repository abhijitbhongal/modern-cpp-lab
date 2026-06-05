#pragma once

class Point {
    private:
        double m_x;
        double m_y;

    public:
        Point():m_x(0.0), m_y(0.0) {};        // ← Default constructor! Important!
        Point(double x, double y): m_x(x), m_y(y) {}

        double getX() const { return m_x; }
        double getY() const { return m_y; }

        void setX(double x) {m_x = x;}
        void setY(double y) {m_y = y;}
};
