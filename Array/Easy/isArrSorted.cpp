// #include<bits/stdc++.h>
// using namespace std;

// int isSorted(int n, int arr[]){
//     for(int i=1; i<n; i++){
//         if(arr[i] >= arr[i-1]){

//         }
//         else{
//             return false;
//         }
//         return true;
//     }
// }

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];

//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }
//     bool res = isSorted(n, arr);
//     cout << res;    
//     return 0;
// }
// //output: 1-> true ;;;; 0->false



// #include<bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

bool isSorted(int arr[], int n) {
  for (int i = 1; i < n; i++) {
    if (arr[i] < arr[i - 1])
      return false;
  }

  return true;
}

int main() {

  int arr[] = {1, 2, 3, 4, 5}, n = 5;

  printf("%s", isSorted(arr, n) ? "True" : "False");
  cout << endl;

}

