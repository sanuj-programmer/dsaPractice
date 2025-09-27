#include <iostream>
using namespace std;

char maxOccurringChar(string s) {
    int freq[256] = {0}; // ASCII characters frequency

    // Count frequency of each character
    for (char c : s) {
        if (c != ' ') // ignoring spaces
            freq[c]++;
    }

    // Find character with maximum frequency
    int maxFreq = 0;
    char maxChar;
    for (int i = 0; i < 256; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxChar = i;
        }
    }

    return maxChar;
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    char result = maxOccurringChar(s);
    cout << "Maximum occurring character: " << result << endl;

    return 0;
}
// Example:
// Input: Enter a string: hello world
// Output: Maximum occurring character: l