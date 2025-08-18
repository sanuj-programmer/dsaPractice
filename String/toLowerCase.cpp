#include <iostream>
using namespace std;

char toLowerCase(char ch) {
    if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
        return ch;  // already lowercase or digit
    else
        return ch - 'A' + 'a';  // uppercase → lowercase
}

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    cout << "Lowercase version: " << toLowerCase(ch) << endl;

    return 0;
}

// Enter a character: Z
// Lowercase version: z
