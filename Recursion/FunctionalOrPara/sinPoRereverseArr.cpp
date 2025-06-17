// // Using single pointer(i)  -- (M1)
// #include <iostream>
// using namespace std;

// void reverseArray(int i, int arr[], int n){    // we have to take arr[] and n also
//     if(i >= n/2){
//         return;
//     }
//     swap(arr[i], arr[n-i-1]);
//     reverseArray(i+1, arr, n);
// }

// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     reverseArray(0, arr, n);
//     for(int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }
//    return 0;
// }






// Using single pointer  -- (M2)
#include <iostream>
using namespace std;

// Function to reverse array using single pointer recursion
void reverseArray(int arr[], int n, int i) {
    if (i >= n / 2) return; // Base case: Stop when pointer reaches the middle

    swap(arr[i], arr[n - i - 1]); // Swap elements
    reverseArray(arr, n, i + 1);  // Recursive call moving the pointer forward
}

// Function to print array
void printArray(int arr[], int n) {
    cout << "The reversed array is:- " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n = 5;
    int arr[] = {5, 4, 3, 2, 1};

    reverseArray(arr, n, 0); // Call function with a single pointer (index 0)
    printArray(arr, n);      // Print reversed array

    return 0;
}
