#include <iostream>

class Tracker {
public:
    Tracker(int id) : m_id(id) {
        std::cout << "  ctor " << m_id << "\n";
    }
    ~Tracker() {
        std::cout << "  dtor " << m_id << "\n";
    }

    int getId() const { return m_id; }

private:
    int m_id;
};

Tracker makeTracker(int id) {
    return Tracker(id);  // Returns a temporary
}

int main() {
    std::cout << "Line 1: makeTracker(1)\n";
    makeTracker(1);  // Temporary created, used, destroyed
    std::cout << "After line 1\n\n";

    std::cout << "Line 2: int id = makeTracker(2).getId()\n";
    int id = makeTracker(2).getId();  // Temp lives during expression
    std::cout << "id = " << id << "\n";
    std::cout << "After line 2\n";

    return 0;
}