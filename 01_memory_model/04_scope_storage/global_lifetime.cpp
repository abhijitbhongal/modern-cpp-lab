#include <iostream>

class Tracker {
public:
    Tracker(const char* name) : m_name(name) {
        std::cout << "  CTOR: " << m_name << "\n";
    }
    ~Tracker() {
        std::cout << "  DTOR: " << m_name << "\n";
    }
private:
    const char* m_name;
};

Tracker globalObj("GLOBAL");  // Constructed BEFORE main()

int main() {
    std::cout << "main starts\n";
    Tracker localObj("local");
    std::cout << "main ends\n";
    return 0;
    // localObj destroyed here
    // globalObj destroyed AFTER main returns
}