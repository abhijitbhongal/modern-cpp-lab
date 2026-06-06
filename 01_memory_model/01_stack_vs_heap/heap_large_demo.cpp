#include <iostream>

int main()
{
    // This would crash on the stack:
    // int hugeArray[10000000];  // 40 MB — too big for stack

    //but the heap can handle it:
    int* hugeArray = new int[10000000]; //40 mb on heap

    //use a few elements 
    hugeArray[0] = 100;
    hugeArray [9999999] = 999;

    std::cout << "First element: " << hugeArray[0] << "\n";
    std::cout << "Last element: " << hugeArray[9999999] << "\n";
    std::cout << "Successfully allocated 40 MB on the heap!\n";

    //Free the memory (note the [] for arrays!)

    delete[] hugeArray;
    hugeArray = nullptr;

    return 0;
}