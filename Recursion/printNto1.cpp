// #include <bits/stdc++.h>
// using namespace std;

// void print(int n, int i){
//     if(n<i){
//         return;
//     }
//     cout << n << endl;
//     print(n-1,1);
// }

// int main(){
//     int n;
//     cin >> n;
//     print(n, 1);
//     return 0;
// }







// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
    
//     for(int i = n; i > 0; i--) { // // Using Corrected loop initialization
//         cout << i << endl;
//     }
    
//     return 0;
// }





#include <bits/stdc++.h>
using namespace std;

void print(int i, int n ){
    if(i<1){
        return;
    }
    cout << i << endl;
    print(i-1,1);
}

int main(){
    int n;
    cin >> n;
    print(n, n);
    return 0;
}

