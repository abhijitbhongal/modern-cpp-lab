#include <iostream>

class Implicit {
public:
    Implicit(int n) : m_n(n) {
        std::cout << "  Implicit ctor: " << m_n << "\n";
    }
    int getValue() const { return m_n; }
private:
    int m_n;
};

class Explicit {
public:
    explicit Explicit(int n) : m_n(n) {
        std::cout << "  Explicit ctor: " << m_n << "\n";
    }
    int getValue() const { return m_n; }
private:
    int m_n;
};

void takeImplicit(Implicit i) {
    std::cout << "  takeImplicit got: " << i.getValue() << "\n";
}

void takeExplicit(Explicit e) {
    std::cout << "  takeExplicit got: " << e.getValue() << "\n";
}

int main() {
    std::cout << "=== Implicit class ===\n";

    Implicit a(42);            // Direct
    Implicit b = 42;           // ⚠️ Implicit conversion — works
    takeImplicit(42);          // ⚠️ Implicit conversion — works

    std::cout << "\n=== Explicit class ===\n";

    Explicit c(42);            // Direct — OK
    Explicit d{42};            // List init — OK
    // Explicit e = 42;        // ❌ ERROR: explicit blocks
    // takeExplicit(42);       // ❌ ERROR: explicit blocks

    Explicit f = Explicit(42); // OK — explicit conversion
    takeExplicit(Explicit(42));// OK — explicit construction

    return 0;
}