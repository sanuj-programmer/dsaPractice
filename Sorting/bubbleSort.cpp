#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int n, int arr[]){
    for(int i=n-1; i>=0; i--){ // example in notebook
        int didSwap = 0;
        for(int j=0; j<=i-1; j++){
            if(arr[j] > arr[j+1]){
                // int temp = arr[j+1];
                // arr[j+1] = arr[j];
                // arr[j] = temp;
                swap(arr[j+1], arr[j]);
                didSwap = 1;
            }
        }
        if(didSwap == 0){
            break;
        }
        cout << "runs\n";
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i=0; i<n;i++){
        cin >> arr[i];
    }
    bubbleSort(n, arr);
    for(int i=0; i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}









// instead of decrement is use increment
// Explanation of Changes:
// Outer loop: Now starts from 0 and runs until n-1, progressively pushing the largest elements to the end.
// Inner loop: Runs from 0 to n-i-1 to compare adjacent elements and swap if needed.
// Optimization (didSwap check): Exits early if no swaps occur, improving efficiency.

// #include <bits/stdc++.h>
// using namespace std;

// void bubbleSort(int n, int arr[]){
//     for(int i=0; i<n-1; i++){  // Incrementing loop  // example below
//         int didSwap = 0;
//         for(int j=0; j<n-i-1; j++){  // Adjusted bounds
//             if(arr[j] > arr[j+1]){
//                 swap(arr[j], arr[j+1]);
//                 didSwap = 1;
//             }
//         }
//         if(didSwap == 0){
//             break; // Optimization: Stop if already sorted
//         }
//         cout << "runs\n";
//     }
// }

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];

//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }
    
//     bubbleSort(n, arr);
    
//     for(int i=0; i<n; i++){
//         cout << arr[i] << " ";
//     }
//     return 0;
// }











3



// Example Walkthrough
// Let’s say we have this array:

// arr = {5, 2, 9, 1, 5, 6}
// n = 6 (6 elements), so i runs from 0 to 4 (total 5 passes).

// Pass (i)	   Comparisons (n - i - 1)	    Result After Pass
// i = 0	        5 comparisons	            {2, 5, 1, 5, 6, 9}
// i = 1	        4 comparisons	            {2, 1, 5, 5, 6, 9}
// i = 2	        3 comparisons	            {1, 2, 5, 5, 6, 9}
// i = 3	        2 comparisons	            {1, 2, 5, 5, 6, 9}
// i = 4	        1 comparison	            {1, 2, 5, 5, 6, 9}
// At i = 4, only one comparison is needed, and the array is sorted.
