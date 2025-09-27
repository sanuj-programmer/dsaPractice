#include <iostream>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    // Replace spaces
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            s[i] = '_';  // replace space with underscore
        }
    }

    cout << "Modified string: " << s << endl;
    return 0;
}
// Example:
// input: Enter a string: my name is Sanuj
// output: Modified string: my_name_is_Sanuj