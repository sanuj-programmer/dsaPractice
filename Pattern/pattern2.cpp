// #include <bits/stdc++.h>
// using namespace std;

// void print2(int n){
//     for(int i=0; i<n; i++){   // Outer loop: incrementing
//         for(int j=0; j<=i; j++){   // Inner loop: printing stars
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int n;
//     cin >> n;
//     print2(n);
//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;

// void printPattern(int n) {
//     for (int i = n; i > 0; i--) {  // Outer loop: decrementing
//         for (int j = n - i; j < n; j++) {  // Inner loop: printing stars
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int n;
//     cin >> n;
//     printPattern(n);  // Call the function to print the pattern
//     return 0;
// }




// without function
#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout << "* " ;
        }
        cout << endl;
    }
    return 0;
}
