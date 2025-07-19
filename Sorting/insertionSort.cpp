#include <bits/stdc++.h>
using namespace std;

void insertionSort(int n, int arr[]){
    for(int i=0; i<n; i++){
        int j=i;
        while(j>0 && arr[j-1] > arr[j]){
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            // swap(arr[j], arr[j-1]);
            j--;
        }
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    insertionSort(n, arr);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}