//shape.hpp
#pragma once

class Shape{

    private:
        class ShapeImpl;  //forward- delcared internal class
        ShapeImpl* m_pImpl; //Pointer to hidder implementation

    public:
        Shape();
        ~Shape();
        Shape(const Shape&) = delete;
        Shape& operator=(const Shape&) = delete;
        
        void setCenter(double x, double y);
        double getCenterX() const;
        double getCenterY() const;

    
};