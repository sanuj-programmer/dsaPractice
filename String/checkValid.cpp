#include <iostream>
using namespace std;

bool checkValid(char ch) {
    if ((ch >= 'a' && ch <= 'z') ||   // lowercase
        (ch >= 'A' && ch <= 'Z') ||   // uppercase
        (ch >= '0' && ch <= '9')) {   // digits
        return true;
    }
    return false;
}

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (checkValid(ch))
        cout << ch << " is valid (alphanumeric)." << endl;
    else
        cout << ch << " is NOT valid." << endl;

    return 0;
}

// Enter a character: A
// A is valid (alphanumeric).