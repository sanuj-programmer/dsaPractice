#include <bits/stdc++.h>
using namespace std;

int maxSumOnCards(int n, int k, int arr[]) {
    int lsum = 0, rsum = 0, maxSum = 0;

    // Take first k cards from left
    for (int i = 0; i < k; i++) {
        lsum += arr[i];
    }
    maxSum = lsum;

    int rindex = n - 1;
    for (int i = k - 1; i >= 0; i--) {
        lsum -= arr[i];               // Remove one from left
        rsum += arr[rindex];          // Add one from right
        rindex--;
        maxSum = max(maxSum, lsum + rsum);
    }

    return maxSum;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    int result = maxSumOnCards(n, k, arr);
    cout << "Maximum sum from taking " << k << " cards from front/back: " << result << endl;

    return 0;
}
