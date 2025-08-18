#include <iostream>
#include <string>
using namespace std;

bool checkPalindrome(string a) {
    int s = 0, e = a.length() - 1;
    while (s <= e) {
        if (a[s] != a[e]) {
            return false; // mismatch
        }
        s++;
        e--;
    }
    return true; // all matched
}

int main() {
    string str;
    cout << "Enter a word: ";
    cin >> str;

    if (checkPalindrome(str))
        cout << str << " is a Palindrome ✅" << endl;
    else
        cout << str << " is NOT a Palindrome ❌" << endl;

    return 0;
}

// Enter a word: noon
// racecar is a Palindrome ✅
