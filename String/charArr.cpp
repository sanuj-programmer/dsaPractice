// 🔹 1. Character Array (char[])

// A low-level way of storing text.
// Fixed size (unless you manage memory manually).
// Needs a '\0' null character at the end to mark the end of the string.

// Example:


#include <iostream>
using namespace std;

int main() {
    char arr[] = "Hello";   // stored as {'H','e','l','l','o','\0'}
    cout << arr << endl;    // prints Hello
    return 0;
}

// ⚠️ Limitation: Cannot easily perform operations like concatenation, substring, etc. You’d need <cstring> functions like strcpy, strcat, strlen.

