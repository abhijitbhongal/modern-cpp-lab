#include <iostream>

int main() {
    double d = 3.7;

    // Old style — silent narrowing conversion
    int a = d;        // a = 3 (silent loss of 0.7)
    int b(d);         // b = 3 (silent loss of 0.7)

    std::cout << "a: " << a << "\n";
    std::cout << "b: " << b << "\n";

    // List initialization — COMPILER ERROR for narrowing
    // int c{d};      // ERROR: narrowing conversion from double to int
    // int e = {d};   // ERROR: same

    std::cout << "List init prevents data loss bugs.\n";
    return 0;
}