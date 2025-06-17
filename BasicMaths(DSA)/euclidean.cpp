// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int a, b;
//     cin >> a >> b;
//     while(a>0 && b>0){
//         if(a>b) a = a % b;
//         else b  = b % a;
//     }
//     if(a==0) {
//         cout << "b: " << b;
//     }else cout << "a: " << a;
//     return 0;
// }







#include <bits/stdc++.h>
using namespace std;

// Function to compute GCD using Euclidean Algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << "GCD: " << gcd(a, b) << endl;
    return 0;
}
