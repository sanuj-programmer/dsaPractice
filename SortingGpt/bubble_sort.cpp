            
//                     inner loops(j->column)
//                             * * * *
//  inner loops(i-> row)       * * * *
//                             * * * *
//                             * * * *


#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) { // i represents outer loops we can say like row.
        for (int j = 0; j < n - i - 1; j++) {    // j represents inner loops we can say like column.
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void printArray(const vector<int>& arr) {
    for (int num : arr) cout << num << " ";
    cout << endl;
}

int main() {
    vector<int> array = {5, 2, 9, 1, 5, 6};
    cout << "Original Array: ";
    printArray(array);

    bubbleSort(array);
    cout << "Sorted Array (Bubble Sort): ";
    printArray(array);

    return 0;
}
