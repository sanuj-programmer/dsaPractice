#include <iostream>
using namespace std;

string removeAdjacentDuplicates(string s) {
    if (s.empty()) return s;

    string result;
    result += s[0]; // first character

    for (int i = 1; i < s.length(); i++) {
        if (s[i] != s[i - 1]) {
            result += s[i];
        }
    }

    return result;
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    string modified = removeAdjacentDuplicates(s);
    cout << "Result: " << modified << endl;

    return 0;
}
// Example:
// Input: Enter a string: aaabbcdddde
// Output: Result: abcde
// Explanation: All adjacent duplicates are removed.








// Method 2: Using std::unique (STL)
#include <algorithm>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    s.erase(unique(s.begin(), s.end()), s.end());

    cout << "Result: " << s << endl;
    return 0;
}
