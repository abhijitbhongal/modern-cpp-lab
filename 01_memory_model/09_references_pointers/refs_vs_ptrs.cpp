#include <iostream>

int main() {
    int x = 10;
    int y = 20;

    // Reference
    int& ref = x;       // Must be initialized
    std::cout << "ref = " << ref << "\n";

    ref = y;            // ⚠️ This does NOT make ref refer to y
                        //    It assigns y's value INTO x (through ref)
    std::cout << "After ref = y:\n";
    std::cout << "  x = " << x << "\n";   // 20 — x changed!
    std::cout << "  y = " << y << "\n";   // 20
    std::cout << "  ref = " << ref << "\n"; // 20

    // Pointer
    int* ptr = &x;
    std::cout << "\n*ptr = " << *ptr << "\n";

    ptr = &y;           // ✅ ptr now points to y
    std::cout << "After ptr = &y:\n";
    std::cout << "  *ptr = " << *ptr << "\n";  // 20

    ptr = nullptr;      // ✅ Pointer can be null
    // *ptr = 5;        // ❌ CRASH: dereferencing nullptr

    return 0;
}