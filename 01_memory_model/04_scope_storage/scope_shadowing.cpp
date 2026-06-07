#include <iostream>

int x = 100;  // global

void demo() {
    std::cout << "global x: " << x << "\n";  // 100

    int x = 50;  // local x shadows global
    std::cout << "local x: " << x << "\n";   // 50

    {
        int x = 25;  // inner block x shadows local
        std::cout << "inner x: " << x << "\n";  // 25
    }

    std::cout << "back to local x: " << x << "\n";  // 50

    // Access global explicitly using ::
    std::cout << "explicit global: " << ::x << "\n";  // 100
}

int main() {
    demo();
    return 0;
}