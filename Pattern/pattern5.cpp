#include <bits/stdc++.h>
using namespace std;

void print5(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

int main(){ 
    int n;
    cin >> n;
    print5(n);
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// void print5(int n) {
//     for (int i = n; i >= 1; i--) { // Start from n and decrement
//         for (int j = 1; j <= i; j++) {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// int main() { 
//     int n;
//     cin >> n;
//     print5(n);
// }

