#include <bits/stdc++.h>
using namespace std;

void print7(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){  // space 
            cout << " "; 
        }
        for(int j=0; j<2*i+1; j++){   // star 
            cout << "*";
        }
        for(int j=0; j<n-i-1; j++){   // space 
            cout << " ";
        }
        cout << endl;
    }
}

void print8(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){  // space 
            cout << " "; 
        }
        for(int j=0; j<2*n-(2*i+1); j++){   // star 
            cout << "*";
        }
        for(int j=0; j<i; j++){   // space 
            cout << " ";
        }
        cout << endl;
    }
}

int main(){ 
    int n;
    cin >> n;
    print7(n);
    print8(n);
    return 0;
}