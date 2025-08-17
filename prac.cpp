#include <string>
#include <iostream>
#include <vector>
using namespace std;



void reverseString(vector<char>& s) {
    int st = 0;
    int e = s.size() - 1;

    while (st < e) {
        swap(s[st++], s[e--]);
    }
}

int main() {
    char s[40] = "hello";

    reverseString(s);

    // print the reversed string
    for (char c : s) {
        cout << c;
    }
    cout << endl;

    return 0;
}
