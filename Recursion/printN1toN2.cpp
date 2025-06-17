#include <bits/stdc++.h>
using namespace std;

void print(int n1, int n2){
    if(n1<n2){
        return;
    }
    cout << n1 << endl;
    print(n1-1, n2);
}

int main(){
    int n1, n2;
    cin >> n1 >> n2;
    print(n1,n2);
    return 0;
}