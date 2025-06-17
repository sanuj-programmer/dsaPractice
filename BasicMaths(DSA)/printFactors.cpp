// // using for loop
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     for(int i=1; i<=n; i++){         // T.C = O(n)
//         if(n % i == 0){
//             cout << i << " ";
//         }
//     }
//     return 0;
// }


// // Using while loop
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
    
//     int i = 1; // Initialize loop variable
//     while(i <= n){           // Condition;  // T.C = O(n)
//         if(n % i == 0){
//             cout << i << " ";
//         }
//         i++; // Increment
//     }
    
//     return 0;
// }






#include <bits/stdc++.h>
using namespace std;

void printFactors(int n) {  // T.C = O(sqrt(n))
    vector<int> ls;

    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            ls.push_back(i);
            if (n / i != i) { // To avoid duplicate factors
                ls.push_back(n / i);
            }
        }
    }

    sort(ls.begin(), ls.end()); // Corrected sorting syntax

    for (auto it : ls) {
        cout << it << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    printFactors(n);
    return 0;
}

