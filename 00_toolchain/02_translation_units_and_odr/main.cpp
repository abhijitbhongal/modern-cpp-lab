//main.cpp
#include<iostream>
#include "point.hpp"
#include "distance.hpp"

int main()
{
    Point a(0.0, 0.0);
    Point b(3.0, 4.0);
    
    std::cout<<"Point A: ("<<a.getX()<<", "<<a.getY()<<")\n";
    std::cout<<"Point B: ("<<b.getX()<<", "<<b.getY()<<")\n";
    std::cout<<"Distance: "<<distance(a,b)<<"\n";

}