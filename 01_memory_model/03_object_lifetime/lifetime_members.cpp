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


class Container
{
    private:
        Tracker m_first;
        Tracker m_second;
        Tracker m_third;

    public:
        Container() : m_first("member1"), m_second("member2"), m_third("member3") 
        {
            std::cout << "Container ctor body\n";
        }
        ~Container() 
        {
            std::cout << "Container dtor body\n";
        }    
};


int main() 
{
    std::cout << "--- creating Container ---\n";
    Container c;
    std::cout << "--- end of main ---\n";
    return 0;
}