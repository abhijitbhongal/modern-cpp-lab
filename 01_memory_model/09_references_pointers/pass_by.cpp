#include <iostream>

void byValue(int n) {
    n = 999;  // Modifies local copy, not original
}

void byReference(int& n) {
    n = 999;  // Modifies original
}

void byPointer(int* n) {
    if (n) {  // Always check pointer for null
        *n = 999;  // Dereference, then modify
    }
}

int main() {
    int a = 10;
    byValue(a);
    std::cout << "After byValue: a = " << a << "\n";  // 10

    int b = 10;
    byReference(b);
    std::cout << "After byReference: b = " << b << "\n";  // 999

    int c = 10;
    byPointer(&c);  // Must take address explicitly
    std::cout << "After byPointer: c = " << c << "\n";  // 999

    byPointer(nullptr);  // Safe — function checks for null
    std::cout << "byPointer(nullptr) didn't crash\n";

    return 0;
}


