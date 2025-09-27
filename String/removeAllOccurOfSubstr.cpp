#include <iostream>
using namespace std;

string removeSubstring(string s, const string& sub) {
    size_t pos = s.find(sub);
    while (pos != string::npos) {
        s.erase(pos, sub.length()); // remove the substring
        pos = s.find(sub);          // search again
    }
    return s;
}

int main() {
    string s, sub;
    cout << "Enter the main string: ";
    getline(cin, s);
    cout << "Enter the substring to remove: ";
    getline(cin, sub);

    string result = removeSubstring(s, sub);
    cout << "Modified string: " << result << endl;

    return 0;
}

// Example:
// input1: Enter the main string: hello world hello everyone
// input2: Enter the substring to remove: hello
// output: Modified string:  world  everyone
// Explanation: All occurrences of "hello" are removed from the main string.
