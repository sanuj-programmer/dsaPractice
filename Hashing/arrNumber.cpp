    // All code is folowing array hashing
    // we mainly check ki kaun sa number kitne baar aa rha
    
    
    // Brute force approach
    // # include <bits/stdc++.h>
    // using namespace std;

    // int hashing(int target, int n, int arr[]){      
    //     int cnt = 0;
        
    //     for(int i=0; i<n; i++){
    //         if(arr[i] == target){
    //             cnt++;
    //         }
    //     }
    //     return cnt;
    // }

    // int main(){
    //     int n;
    //     cin >> n;
    //     int arr[n];

    //     for(int i=0; i<n; i++){
    //         cin >> arr[i];
    //     }
    //     int target;
    //     cin >>  target;


    //     int result = hashing(target, n, arr);
    //     cout << result;
    //     return 0;
    // }




    // #include <bits/stdc++.h>
    // using namespace std;

    // int countOccurrences(int target, int arr[], int size) {  
    //     int cnt = 0;
    //     for (int i = 0; i < size; i++) {
    //         if (arr[i] == target) {
    //             cnt++;
    //         }
    //     }
    //     return cnt;
    // }

    // int main() {
    //     int num = 5;
    //     int arr[5] = {1, 2, 1, 3, 2};

    //     int target = 2; // Number to count occurrences of
    //     int result = countOccurrences(target, arr, num);
        
    //     cout << target << " occurs " << result << " times" << endl;
        
    //     return 0;
    // }




    // optimized approach
    // #include <bits/stdc++.h>
    // using namespace std;

    // void countOccurrences(int arr[], int n, int queries[], int q) {  // using array hashing
    //     int hash[6] = {0}; // Fixed size of 6 (adjust as needed)

    //     // Populate hash array with frequencies
    //     for (int i = 0; i < n; i++) {
    //         hash[arr[i]]++;
    //     }

    //     // Answer each query
    //     for (int i = 0; i < q; i++) {
    //         cout << hash[queries[i]] << endl;
    //     }
    // }

    // int main() {
    //     int n;
    //     cin >> n;
    //     int arr[n];

    //     for (int i = 0; i < n; i++) {
    //         cin >> arr[i];
    //     }

    //     int query;
    //     cin >> query;
    //     int queries[query];

    //     for (int i = 0; i < query; i++) {
    //         cin >> queries[i];
    //     }

    //     countOccurrences(arr, n, queries, query);

    //     return 0;
    // }






    // using array hashing with separate function
    // #include <bits/stdc++.h>
    // using namespace std;

    // void hashing(int n, int arr[], int q, int queries[]){
    //     int hash[13] = {0}; // Initialize hash table

    //     for(int i=0; i<n; i++){
    //         hash[arr[i]] += 1; // Count occurrences
    //     }

    //     for(int i=0; i<q; i++){ // Process queries
    //         cout << hash[queries[i]] << endl;
    //     }
    // }

    // int main(){
    //     int n;
    //     cin >> n;
    //     int arr[n];

    //     for(int i=0; i<n; i++){
    //         cin >> arr[i]; // Input array elements
    //     }

    //     int q;
    //     cin >> q;
    //     int queries[q];

    //     for(int i=0; i<q; i++){
    //         cin >> queries[i]; // Input query numbers
    //     }

    //     hashing(n, arr, q, queries); // Call function
    //     return 0;
    // }








    // using array hashing 
    # include <bits/stdc++.h>
    using namespace std;


    int main(){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        int hash[13] = {0};         //This is used to count occurrences of numbers in the given range [0, 12].
        for(int i=0; i<n; i++){     // Iterates over the array arr and updates the hash array.
            hash[arr[i]]+= 1;
            // Step-by-Step Explanation: 
            // arr[i] represents the current number in the user-given array.
            // hash[arr[i]] represents the count of that number in the hash table.
            // Each time arr[i] appears, hash[arr[i]] is incremented by 1.
        }

        int query;
        cin >> query;
        while(query--){
            int num;
            cin >> num;
            cout << hash[num] << endl;
        }
        return 0;
    }