// // we mainly check ki kaun sa character kitne baar aa rha

// // for all 256 character this code is applicable
// # include <bits/stdc++.h>
// using namespace std;


// int main(){
//     string s;
//     cin >> s;

//     // precompute
//     int hash[256] = {0};
//     for(int i=0; i<s.size(); i++){
//         hash[s[i]]++;     
//         // hash[s[i]] += 1; 
//     }

//     // query
//     int q; 
//     cin >> q;
//     // for(int i=0; i<q; i++){
//     while(q--){
//         char c;
//         cin >> c;
//         // fetch
//         cout << hash[c] << endl;
//     }
//     return 0;
// }








// #include <bits/stdc++.h>
// using namespace std;

// void processQueries(string s, int q, char queries[]) {
//     // Precompute frequency of each character
//     int hash[256] = {0};  // Supports all ASCII characters

//     for (int i = 0; i < s.size(); i++) {
//         hash[s[i]]++;
//     }

//     // Handle queries
//     for (int i = 0; i < q; i++) {
//         cout << hash[queries[i]] << endl;
//     }
// }

// int main() {
//     string s;
//     cin >> s;

//     int q;
//     cin >> q;

//     char queries[q];  // Array to store query characters
//     for (int i = 0; i < q; i++) {
//         cin >> queries[i];
//     }

//     processQueries(s, q, queries);  // Call function

//     return 0;
// }






// for lowercase character
# include <bits/stdc++.h>
using namespace std;


int main(){
    string s;
    cin >> s;

    // precompute
    int hash[26] = {0};
    for(int i=0; i<s.size(); i++){
        hash[s[i] - 'a']++;
    }

    // query
    int q; 
    cin >> q;
    // for(int i=0; i<q; i++){
    while(q--){
        char c;
        cin >> c;
        // fetch
        cout << hash[c - 'a'] << endl;
    }
    return 0;
}