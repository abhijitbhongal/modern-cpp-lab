#include <iostream>

// constexpr variable - known at comile time
constexpr int kSecondsPerDay = 24 * 60 * 60;

// constexpr function - can run at compile or runtime
constexpr int square(int x) {
    return x * x;
}

// constexpr function for distance calculation
constexpr double distance_squared(double x1, double y1, double x2, double y2){
    double dx =x2-x1;
    double dy = y2-y1;
    return dx * dx + dy * dy;
}

int main()
{
    // compile-time computation
    constexpr int kAreaOfTen = square(10); //computed at compile time
    constexpr double kDistsq = distance_squared(0,0,3,4); // = 25 at compile time

    // Compile-time array sizes (must be constexpr)
    int buffer [square(8)];  // Array size know at compile time = 64

    // Runtime use - same function, runtime arguments
    int userInput;
    std::cout<<"Enter a number: ";
    std::cin >> userInput;
    int result = square (userInput);  // computed at runtime 

    std::cout <<"Seconds per day:" <<kSecondsPerDay <<"\n";
    std::cout <<"Area of 10:" <<kAreaOfTen <<"\n";
    std::cout <<"Distance squared (0,0) to (3,4):" <<kDistsq <<"\n";
    std::cout <<"Square of your input:" <<result <<"\n";
    std::cout <<"Buffer size:" <<sizeof(buffer)/sizeof(int) <<"\n";
    
    return 0;


}