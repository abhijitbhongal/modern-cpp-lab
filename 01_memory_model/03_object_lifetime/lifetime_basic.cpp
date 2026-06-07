#include <iostream>

class Tracker
{
    private:
        const char* m_name;

    public:
        Tracker(const char* name):m_name(name)
        {
            std::cout<< " Constructor: "<< m_name <<"\n";
        }
        ~Tracker()
        {
            std::cout<< " Destuctor: "<< m_name <<"\n";
        }
};

void innerFunction()
{
     std::cout << "innerFunction starts\n";
    Tracker inner("inner");
    std::cout << "innerFunction ends\n";
}


int main()
{
    std::cout << "main starts\n";
    Tracker outer("outer");

    innerFunction();

    std::cout << "main ends\n";
    return 0;
}