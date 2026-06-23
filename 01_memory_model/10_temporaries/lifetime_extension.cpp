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
    return Tracker(id);
}

int main() {
    std::cout << "Without extension:\n";
    {
        makeTracker(1);  // Temporary destroyed at ;
        std::cout << "  After expression\n";
    }

    std::cout << "\nWith const ref extension:\n";
    {
        const Tracker& ref = makeTracker(2);  // Extended!
        std::cout << "  Inside scope, ref.id = " << ref.getId() << "\n";
        std::cout << "  About to leave scope\n";
    }  // dtor 2 runs HERE, not at the ; above

    std::cout << "After scope\n";
    return 0;
}