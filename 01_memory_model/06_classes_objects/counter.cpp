#include <iostream>

class Counter {
public:
    Counter() : m_count(0) {}
    Counter(int start) : m_count(start) {}

    void increment() { m_count++; }
    void decrement() { m_count--; }
    void reset() { m_count = 0; }

    int getValue() const { return m_count; }

private:
    int m_count;
};

int main() {
    Counter c1;
    Counter c2{100};

    c1.increment();
    c1.increment();
    c1.increment();

    c2.decrement();
    c2.decrement();

    std::cout << "c1: " << c1.getValue() << "\n";  // 3
    std::cout << "c2: " << c2.getValue() << "\n";  // 98

    return 0;
}