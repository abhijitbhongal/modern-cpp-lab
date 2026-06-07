#include <iostream>

class Tracker {
    private:
        const char* m_name;

    public:
        Tracker(const char* name) : m_name(name) 
        {
            std::cout << "  CTOR: " << m_name << "\n";
        }
        
        ~Tracker()
        {
            std::cout << "  DTOR: " << m_name << "\n";
        }
};

int main() {
    Tracker a("A");
    Tracker b("B");
    Tracker c("C");

    std::cout << "--- end of main ---\n";
    return 0;
}