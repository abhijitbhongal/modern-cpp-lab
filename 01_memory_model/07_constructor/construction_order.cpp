

// Critical Rules to Remember
// Members are constructed BEFORE the class's constructor body runs
// Members are constructed in DECLARATION order (not initializer list order!)
// Members are destroyed AFTER the class's destructor body, in REVERSE order


#include <iostream>

class Tracker 
{
    private:
        const char* m_name;

    public:
        Tracker(const char* name) : m_name(name) 
        {
            std::cout << "  Tracker ctor: " << m_name << "\n";
        }

        ~Tracker() 
        {
            std::cout << "  Tracker dtor: " << m_name << "\n";
        }

};

class Container 
{
    private:
        Tracker m_second;
        Tracker m_first;
        Tracker m_third;

    public:
        Container(): m_first("first"), m_second("second"), m_third("third")
        {
            std::cout << "Container body\n";
        }

};

int main() 
{
    std::cout << "Creating Container:\n";
    Container c;
    std::cout << "End of main\n";
    return 0;
}
