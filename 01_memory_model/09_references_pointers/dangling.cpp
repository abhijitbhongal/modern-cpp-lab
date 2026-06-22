#include <iostream>

int& danglingRef() {
    int local = 42;
    return local;  // ⚠️ DANGER: local destroyed when function returns
}

int* danglingPtr() {
    int local = 42;
    return &local;  // ⚠️ DANGER: same issue
}

int main() {
    // int& bad = danglingRef();  // Undefined behavior to access bad
    // std::cout << bad << "\n";  // Could crash or print garbage

    int* badPtr = danglingPtr();
    // std::cout << *badPtr << "\n";  // Same — undefined behavior

    std::cout << "Don't return references or pointers to local variables!\n";
    return 0;
}