// Option 1: Use vector<char> properly
#include <string>
#include <iostream>
#include <vector>
using namespace std;

void reverseString(vector<char>& s) {
    int st = 0;     //start index
    int e = s.size() - 1;       //end index
    while (st < e) {
        swap(s[st++], s[e--]);
    }
}

int main() {
    vector<char> s = {'h','e','l','l','o'}; // vector of chars

    reverseString(s);

    // print the reversed string
    for (char c : s) {
        cout << c;
    }
    cout << endl;

    return 0;
}

// Output:
// olleh





// // Option 2: Keep using char[] (C-style string)

// #include <iostream>
// #include <cstring>
// using namespace std;

// void reverseString(char s[]) {
//     int st = 0;
//     int e = strlen(s) - 1; // use strlen for C-string length
//     while (st < e) {
//         swap(s[st++], s[e--]);
//     }
// }

// int main() {
//     char s[40] = "hello"; // C-string

//     reverseString(s);

//     cout << s << endl; // prints directly, since it's still a C-string

//     return 0;
// }

// // Output:
// // olleh
