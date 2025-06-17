// #include <bits/stdc++.h>
// using namespace std;

// void selectionSort(int n, int arr[]){
//     for(int i=0; i<=n-2; i++){
//         int mini = i;
//         for(int j=i; j<=n-1; j++){
//             if(arr[j] < arr[mini]) {
//                 mini = j;
//             }
//         }
//         int temp = arr[mini];
//         arr[mini] = arr[i];
//         arr[i] = temp;
//         // // or directly swap the arr[i] to arr[mini] element
//         // swap(arr[i], arr[mini]);
//     }
// }

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];

//     for(int i=0; i<n;i++){
//         cin >> arr[i];
//     }
//     selectionSort(n, arr);
//     for(int i=0; i<n;i++){
//         cout << arr[i] << " ";
//     }
//     return 0;
// }








// (striver's notes Solution)
#include<bits/stdc++.h>

using namespace std;
void selection_sort(int arr[], int n) {
  // selection sort
  for (int i = 0; i < n - 1; i++) {
    int mini = i;
    for (int j = i; j < n; j++) {
      if (arr[j] < arr[mini]) {
        mini = j;
      }
    }
    int temp = arr[mini];
    arr[mini] = arr[i];
    arr[i] = temp;
  }

  cout << "After selection sort: " << "\n";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";

}
int main() {
  int arr[] = {13,46,24,52,20,9};
  int n = sizeof(arr) / sizeof(arr[0]);
   cout << "Before selection sort: " << "\n";
   for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";
  selection_sort(arr, n);
  return 0;
}