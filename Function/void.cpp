// Explanation:
// Using void with a Function
// Use void when the function does NOT return any value.
// It is used when a function only performs an action (e.g., printing output, modifying data, etc.).


// #include <bits/stdc++.h>
// using namespace std;

// void printName() {
//     cout << "Hey Sanuj!" << endl;
// }
// int main() {
//     printName(); 
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

void sum(int num1, int num2) {     
    int num3 = num1 + num2;
    cout << num3;
}
int main() {
    int num1, num2;
    cin >> num1 >> num2;
    sum(num1, num2);
    // cout << "The sum is " << res << endl;
    return 0;
}