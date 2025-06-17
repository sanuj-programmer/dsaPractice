#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxSubarrayLengthWithSumAtMostK(vector<int>& arr, int k) {
    int n = arr.size();
    int l = 0, r = 0;
    int sum = 0, maxlen = 0;

    while (r < n) {
        sum += arr[r];

        while (sum > k) {
            sum -= arr[l];
            l++;
        }

        maxlen = max(maxlen, r - l + 1);
        r++;
    }

    return maxlen;
}

int main() {
    int n, k;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter value of k: ";
    cin >> k;

    int result = maxSubarrayLengthWithSumAtMostK(arr, k);
    cout << "Maximum subarray length with sum <= " << k << " is: " << result << endl;

    return 0;
}
