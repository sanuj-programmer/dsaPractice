// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     int cnt=0;
//     for(int i=1; i<=n;i++){        // T.C = O(n)
//         if(n%i==0){
//             cnt++;
//     }
//         }
//         if(cnt == 2){
//             cout << "Prime";
//         }else {
//             cout << "Not prime";
//         }
//         return 0;
// }




#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 0;
    for(int i=1; i*i<=n; i++){                  // T.C = O(sqrt(n))
        if(n % i == 0){
            cnt++;
        }
        if((n / i) != i){
            cnt++;
        }
    }
    if(cnt == 2){
        cout << "Prime";
    } else {
        cout << "Not prime";
    }
    return 0;
}