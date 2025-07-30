// #include <bits/stdc++.h>
// using namespace std;

// void print1(int n){
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cout << "x ";
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int n;
//     cin >> n;
//     print1(n);
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

void print1(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

int main(){
    int t;
    cin >> t;  //if for 2 test cases lets suppose 1st for 3 and 2nd  for 4
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        print1(n);
    }
    return 0;
}