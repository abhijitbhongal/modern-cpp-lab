#include <iostream>

void showAddresses()
{
    int a = 10;
    int b = 20;
    int c = 30;

    std::cout<<"Stack address:\n";
    std::cout << "  a is at: " << &a << "\n";
    std::cout << "  b is at: " << &b << "\n";
    std::cout << "  c is at: " << &c << "\n";
}

int main()
{
    int x = 100;
    int y = 200;

    std::cout << "In main():\n";
    std::cout << "  x is at: " << &x << "\n";
    std::cout << "  y is at: " << &y << "\n\n";

    showAddresses();

    return 0;
}