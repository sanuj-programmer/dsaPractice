#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int revNum = 0;
    while (n>0){
        int lastDigit = n % 10;
        revNum = (revNum * 10) + lastDigit;
        n = n / 10;
    }
    cout << revNum;
    return 0;
}