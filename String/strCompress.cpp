#include <iostream>
using namespace std;

string compressString(const string &s) {
    if (s.empty()) return "";

    string result = "";
    int count = 1;

    for (size_t i = 1; i <= s.length(); i++) {
        if (i < s.length() && s[i] == s[i - 1]) {
            count++;
        } else {
            result += s[i - 1] + to_string(count);
            count = 1;
        }
    }

    return result;
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    string compressed = compressString(s);
    cout << "Compressed string: " << compressed << endl;

    return 0;
}
// Example:
// Input: Enter a string: aaabbcdddde
// Output: Compressed string: a3b2c1d4e1
// Explanation: The string "aaabbcdddde" is compressed to "a3b2c1d4e1" where each character is followed by its count.