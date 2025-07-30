// #include <bits/stdc++.h>
// using namespace std;

// void hello(int num) {
//     cout << num << endl;
//     num = num+5;
//     cout << num << endl;
//     num = num+5;
//     cout << num << endl;
// }
// int main() {
//     int num = 10;
//     hello(num);   // As at this point it is taking copy of original value(10)
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void doSomething(string s) {
    s[0] = 't';
    cout << s << endl;
}
int main() {
    string s =  "Sanuj";
    doSomething(s);    // yahan se function upar jayega aur execution khatam krega tbhi (11) line execute hoga.
    cout << s << endl;   // last mein execute hua 
    return 0;
}

