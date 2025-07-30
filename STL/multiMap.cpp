#include <bits/stdc++.h>
using namespace std;

int main() {
    multimap<int, int> mpp;

    // Correct way to insert elements
    mpp.insert({1, 10});  // mpp[1] = 10; -> does not work for multimap
    mpp.emplace(2, 20);
    mpp.emplace(3, 30);
    mpp.emplace(1, 40); // Multiple values for the same key

    for (auto it : mpp) {
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}
