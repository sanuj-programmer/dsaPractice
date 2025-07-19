#include<bits/stdc++.h>
using namespace std;

void print(int n, int i){
    if(n<i){
        return;
    }
    print(i+1, 1);
    cout << i << endl;
}

int main(){
    int n;
    cin >> n;
    print(n, n);
    return 0;
}