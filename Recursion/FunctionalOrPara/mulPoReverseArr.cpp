// // Using multiple pointer  -- (M1)
// Approach Used:
// Two pointers:
// start (initialized to 0) → points to the beginning of the array.
// end (initialized to n-1) → points to the end of the array.
// Recursive swapping:
// Swap arr[start] and arr[end].
// Move the pointers inward (start + 1, end - 1).
// Call the function recursively until start >= end (base case).

// #include <iostream>
// using namespace std;
// //Function to print array
// void printArray(int arr[], int n) {
//    cout << "The reversed array is:- " << endl;
//    for (int i = 0; i < n; i++) {
//       cout << arr[i] << " ";
//    }
// }
// //Function to reverse array using recursion
// void reverseArray(int arr[], int start, int end) {
//    if (start < end) {
//       swap(arr[start], arr[end]);
//       reverseArray(arr, start + 1, end - 1);
//    }
// }
// int main() {
//    int n = 5;
//    int arr[] = { 5, 4, 3, 2, 1 };
//    reverseArray(arr, 0, n - 1);
//    printArray(arr, n);
//    return 0;
// };










// Using multiple pointer  -- (M2)
// Approach Used:
// Two pointers (p1 and p2) are initialized:
// p1 starts at the beginning of the array (index 0).
// p2 starts at the end of the array (index n-1).
// The elements at p1 and p2 are swapped.
// The pointers move towards the center (p1++, p2--) until they meet.

#include <iostream>
using namespace std;
//Function to print array
void printArray(int arr[], int n) {
   cout << "The reversed array is:- " << endl;
   for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
   }
}
//Function to reverse array 
void reverseArray(int arr[], int n) {
   int p1 = 0, p2 = n - 1;
   while (p1 < p2) {
      swap(arr[p1], arr[p2]);
      p1++; p2--;
   }
   printArray(arr, n);
}
int main() {
   int n = 5;
   int arr[] = { 5, 4, 3, 2, 1};
   reverseArray(arr, n);
   return 0;
}