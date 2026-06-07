#include <iostream>

int main() {
    // Default initialization (UNDEFINED VALUE for built-ins)
    int a;
    // std::cout << a << "\n";  // DON'T DO THIS — undefined behavior

    // Value initialization (zero for built-ins)
    int b{};
    int c = int();

    // Direct initialization
    int d(5);

    // Copy initialization
    int e = 5;

    // List initialization
    int f{5};
    int g = {5};

    std::cout << "b (value-init): " << b << "\n";
    std::cout << "c (value-init): " << c << "\n";
    std::cout << "d (direct):     " << d << "\n";
    std::cout << "e (copy):       " << e << "\n";
    std::cout << "f (list):       " << f << "\n";
    std::cout << "g (copy-list):  " << g << "\n";

    return 0;
}