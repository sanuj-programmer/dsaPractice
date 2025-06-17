#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    map<char, int> mpp;
    // unordered_map<int, int> mpp;
    for(int i=0; i<s.size(); i++){
        mpp[s[i]]++;
    }

    int q;
    cin >> q;
    for(int i=0; i<q; i++){
        char ch;
        cin >> ch;
        cout << ch << endl;
        cout << ch << ": " << mpp[ch] << endl;
    }
    return 0;
}














// #include <bits/stdc++.h>
// using namespace std;

// void mapping(string s, int q, char queries[]) {
//     map<char, int> mpp;  // Corrected map type to store character frequencies

//     for (int i = 0; i < s.size(); i++) {
//         mpp[s[i]]++;  // Count occurrences of each character
//     }

//     for (int i = 0; i < q; i++) {
//         cout << queries[i] << ": " << mpp[queries[i]] << endl;
//     }
// }

// int main() {
//     string s;
//     cin >> s;

//     int q;
//     cin >> q;

//     char queries[q];  // Correctly declare array
//     for (int i = 0; i < q; i++) {
//         cin >> queries[i];
//     }

//     mapping(s, q, queries);

//     return 0;  // Best practice
// }
