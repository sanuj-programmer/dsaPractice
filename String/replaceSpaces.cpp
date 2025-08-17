#include <string>
#include <iostream>
using namespace std;

string replaceSpaces(string &str) {
    string temp = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        } else {
            temp.push_back(str[i]);
        }
    }
    return temp;
}

int main() {
    string s = "Hello World from C++";
    string result = replaceSpaces(s);
    cout << result << endl;
    return 0;
}
