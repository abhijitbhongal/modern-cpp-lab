#include <iostream>

void counter() {
    int normalCount = 0;        // reset every call
    static int staticCount = 0; // persists across calls

    normalCount++;
    staticCount++;

    std::cout << "normal: " << normalCount
              << ", static: " << staticCount << "\n";
}

int main() {
    counter();  // normal: 1, static: 1
    counter();  // normal: 1, static: 2
    counter();  // normal: 1, static: 3
    counter();  // normal: 1, static: 4
    return 0;
}