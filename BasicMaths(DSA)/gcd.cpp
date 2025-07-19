// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n1, n2;
//     cin >> n1 >> n2;
    
//     int gcd = 1;  // Store the greatest common divisor

//     for (int i = 1; i <= min(n1, n2); i++) {
//         if (n1 % i == 0 && n2 % i == 0) {
//             gcd = i;  // Keep updating to the greatest divisor found
//         }
//     }

//     cout << "GCD: " << gcd << endl;  // Print the final GCD value

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n1, n2;
//     cin >> n1 >> n2;
    
//     int gcd = 1;  // Store the greatest common divisor

//     for (int i = min(n1, n2); i>1; i--) {
//         if (n1 % i == 0 && n2 % i == 0) {
//             cout << gcd;  // Keep updating to the greatest divisor found
//         }
//     }

//     // cout << "GCD: " << gcd << endl;  // Print the final GCD value

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int n1, n2;
//     cin >> n1 >> n2;

//     int gcd = 1;

//     for (int i = min(n1, n2); i >= 1; i--) {
//         if (n1 % i == 0 && n2 % i == 0) {
//             gcd = i;
//             break;
//         }
//     }

//     cout << "GCD: " << gcd << endl;

//     return 0;
// }


#include <bits/stdc++.h>


int main() {
    int n1, n2;
    cout << "Enter n1: ";
    cin >> n1;
    cout << "Enter n2: ";
    cin >> n2;
    cout << "sum: " << n1+n2 << endl;
    return 0;
}