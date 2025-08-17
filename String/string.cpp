// 🔹 2. C++ String (std::string)

// A high-level class from the C++ Standard Library (<string>).
// Dynamic in size → can grow or shrink as needed.
// Provides many built-in functions for manipulation.

// Example:

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Hello";
    s += " World";         // easy concatenation
    cout << s << endl;     // prints Hello World
    cout << s.length() << endl; // prints 11
    return 0;
}