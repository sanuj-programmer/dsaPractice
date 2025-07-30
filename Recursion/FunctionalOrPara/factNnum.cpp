#include <bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n == 0){       // or use n == 1
        return 1;
    }
    return (n * fact(n-1));      // Problem broken down into 2 parts and then combined.
}

int main(){
    int n;
    cin >> n;
    cout << "Factorial: " << fact(n) << endl;
    return 0;
}