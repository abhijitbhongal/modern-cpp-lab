#include <iostream>

class T {
    private:
        int m_n;
    public:
        T(int n) : m_n(n) { std::cout << "ctor " << m_n << "\n"; }
        ~T() { std::cout << "dtor " << m_n << "\n"; }

};

void func() {
    T a(1);
    {
        T b(2);
        T c(3);
    }
    T d(4);
}

int main() {
    func();
    return 0;
}