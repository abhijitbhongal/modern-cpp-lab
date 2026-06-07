#include <iostream>

class Tracker 
{
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

void demoHeap()
{
    std::cout << "demoHeap starts\n";

    Tracker stackObj("stack");
    Tracker* heapObj = new Tracker("heap");

    std::cout << "demoHeap ends\n";
    // stackObj destroyed automatically here
    // heapObj NOT destroyed — leaked!
}

int main() 
{
    demoHeap();
    std::cout << "back in main\n";
    return 0;
}