#include <iostream>
using namespace std;

void permute(string s, int start, int end) {
    if (start == end) {
        cout << s << endl;
    } else {
        for (int i = start; i <= end; i++) {
            swap(s[start], s[i]);     // swap characters
            permute(s, start + 1, end); // recurse
            swap(s[start], s[i]);     // backtrack
        }
    }
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    cout << "All permutations:\n";
    permute(s, 0, s.length() - 1);

    return 0;
}
// Example:
// Enter a string: ABC
// All permutations:
// ABC
// ACB
// BAC
// BCA
// CBA
// CAB
// // Explanation: All permutations of the string "ABC" are printed.