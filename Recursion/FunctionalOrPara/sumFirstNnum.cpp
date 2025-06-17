// #include <bits/stdc++.h>
// using namespace std;

// void printSum(int i, int sum){
//     if(i<1){
//         cout << "sum : " << sum << endl;
//         return;
//     }
//     printSum(i-1, sum+i);       // using parameterised recursion
//        // Problem broken down into 2 parts and then combined.
// }

// int main(){
//     int n;
//     cin >> n;
//     printSum(n, 0);
//     return 0;
// }







#include <bits/stdc++.h>
using namespace std;

int printSum(int n){  
    if(n == 0){
        return 0;
    }
    return (n + printSum(n-1));     // using functionL recursion
       // Problem broken down into 2 parts and then combined.
}

int main(){
    int n;
    cin >> n;
    cout << "Sum: " << printSum(n) << endl;
    return 0;
}