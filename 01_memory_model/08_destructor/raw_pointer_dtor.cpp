#include <iostream>

class IntArray {
public:
    IntArray(int size) : m_size(size) {
        m_data = new int[size];
        for (int i = 0; i < size; i++) {
            m_data[i] = i * 10;
        }
        std::cout << "  Allocated " << size << " ints\n";
    }

    ~IntArray() {
        delete[] m_data;
        std::cout << "  Released memory\n";
    }

    int get(int i) const { return m_data[i]; }

    // Disable copy for now (would lead to double-delete)
    IntArray(const IntArray&) = delete;
    IntArray& operator=(const IntArray&) = delete;

private:
    int* m_data;
    int m_size;
};

int main() {
    {
        IntArray arr(5);
        std::cout << "  arr[2] = " << arr.get(2) << "\n";
    }  // Destructor runs here, memory freed
    std::cout << "After scope\n";
    return 0;
}