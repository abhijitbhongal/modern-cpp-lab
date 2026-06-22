#include <iostream>

// Class WITHOUT = default
class WithoutDefault {
public:
    WithoutDefault(int x) : m_x(x) {
        std::cout << "  param ctor: " << m_x << "\n";
    }
private:
    int m_x;
};

// Class WITH = default
class WithDefault {
public:
    WithDefault() = default;  // Bring back default ctor
    WithDefault(int x) : m_x(x) {
        std::cout << "  param ctor: " << m_x << "\n";
    }
private:
    int m_x = 0;  // Default member initializer
};

int main() {
    std::cout << "WithDefault:\n";
    WithDefault a;        // Works — uses compiler-generated default
    WithDefault b{42};    // Param ctor

    std::cout << "WithoutDefault:\n";
    // WithoutDefault c;  // ❌ ERROR: no default ctor
    WithoutDefault d{42}; // OK

    return 0;
}