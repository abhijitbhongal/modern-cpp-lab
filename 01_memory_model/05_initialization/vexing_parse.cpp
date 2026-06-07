#include <iostream>

class Widget {
public:
    Widget() { std::cout << "Widget created\n"; }
};

int main() {
    Widget w1;       // Creates a Widget
    // Widget w2();  // PROBLEM: declares a function returning Widget!
    Widget w3{};     // Modern fix: creates a Widget

    std::cout << "Done\n";
    return 0;
}

// Widget w2(); looks like creating a Widget with default initialization, but C++ parses it as a function declaration — w2 is a function taking no parameters, returning a Widget.
// The fix: Use Widget w3{}; instead. List initialization can never be parsed as a function declaration.
// This is why modern style guides recommend {} initialization for class objects.