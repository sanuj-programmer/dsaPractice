#include <bits/stdc++.h>
using namespace std;

int cnt = 0;
void print(){
    if(cnt == 3){     // Base case for condition 
        return;
    }
    cout << cnt << endl;
    cnt++;
    print(); // Calling print fun. again and again until specific condition met
}

int main(){
    print();
    return 0;
}

