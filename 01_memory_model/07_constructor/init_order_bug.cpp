#include <iostream>

class Buggy {
public:
    Buggy(int value)
        : m_b(m_a * 2)   // Looks like m_a is set first... BUT NOT REALLY
        , m_a(value)     // Wait, m_a is declared AFTER m_b
    {
        std::cout << "m_a = " << m_a << ", m_b = " << m_b << "\n";
    }

private:
    int m_b;   // Declared FIRST
    int m_a;   // Declared SECOND
};

int main() {
    Buggy b(10);
    return 0;
}


//Fix: Always list members in initializer list in declaration order. Or better — reorder declarations to match initialization order.