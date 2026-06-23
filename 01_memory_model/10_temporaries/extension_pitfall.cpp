#include <iostream>
#include <string>

class Container {
public:
    Container(const std::string& s) : m_str(s) {}  // Stores reference!
    const std::string& get() const { return m_str; }
private:
    const std::string& m_str;  // ⚠️ Storing reference is dangerous
};

int main() {
    Container c(std::string("temporary"));
    // Temporary destroyed at ;
    // c.m_str now refers to destroyed memory!

    std::cout << c.get() << "\n";  // ⚠️ Undefined behavior
    return 0;
}