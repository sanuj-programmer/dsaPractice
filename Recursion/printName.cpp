// #include <bits/stdc++.h>
// using namespace std;

// int cnt = 0;
// void print(string s){
//     if(cnt ==  5){
//         return ;
//     }
//     cout << s << endl;
//     cnt++;
//     print(s);
// }

// int main(){
//     string s;
//     cin >> s;
//     print(s);
//     return 0;
// }





#include <bits/stdc++.h>
using namespace std;

void print(int i, int n){
    if(i > n){
        return ;
    }
    cout << "Sanuj" << endl;
    print(i+1, n);
}

int main(){
    int n;
    cin >> n;
    print(1, n);
    return 0;
}