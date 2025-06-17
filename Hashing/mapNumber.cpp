 // All code is folowing Map hashing

 
# include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    //(method - 1 : to iterate in the map)
    map<int, int> mpp;
    // or use unordered map
    // unordered_map<int, int> mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }

    // //(method - 2 : to iterate in the map)
    // for(auto it : mpp){
    //     cout << it.first << "->" << it.second << endl;
    // }

    int query;
    cin >> query;
    while(query--){
        int num;
        cin >> num;
        cout << mpp[num] << endl;
    }
    return 0;
}






// # include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     // precomputation can  be done while taking the input array
//     map<int, int> mpp;
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//         mpp[arr[i]]++;
//     }


//     int query;
//     cin >> query;
//     while(query--){
//         int num;
//         cin >> num;
//         cout << mpp[num] << endl;
//     }
//     return 0;
// }







// #include <bits/stdc++.h>
// using namespace std;

// void mapHashing(int n, int arr[], int q, int queries[]){
//     map<int, int> mpp;
//     for(int i=0; i<n; i++){
//         mpp[arr[i]] += 1;
//     }

//     for(int i=0; i<q; i++){
//         cout << mpp[queries[i]] << endl;
//     }
// }

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];

//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }

//     int q;
//     cin >> q;
//     int queries[q];
//     for(int i=0; i<q; i++){
//         cin >> queries[i];
//     }

//     mapHashing(n, arr, q, queries);
//     return 0;
// }





