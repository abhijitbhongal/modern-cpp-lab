// main.cpp
// Uses functions from math_utils

#include <iostream>
#include "math_utils.hpp"

int main()
{
    int sum = add(3,4);
    int product = multiply(5,6);

    std::cout <<"Sum: " <<sum <<"\n";
    std::cout <<"Product:" <<product <<"\n";

    return 0;
}