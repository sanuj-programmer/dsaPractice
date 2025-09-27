// Case1. reverse each word individually while keeping the word order intact.
#include <iostream>
#include <string>
#include <sstream>  // for stringstream
#include <algorithm> // for reverse
using namespace std;

string reverseEachWord(string s) {
    stringstream ss(s);
    string word, result;
    
    while (ss >> word) {
        reverse(word.begin(), word.end()); // reverse the current word
        result += word + " ";              // add it to result with a space
    }
    
    if (!result.empty()) result.pop_back(); // remove trailing space
    return result;
}

int main() {
    string s;
    cout << "Enter a sentence: ";
    getline(cin, s); // read full line including spaces

    string reversed = reverseEachWord(s);
    cout << "Output: " << reversed << endl;

    return 0;
}
// Example:
// Input: Enter a sentence: my name is Sanuj
// Output: ym eman si junaS



// // Case 2: Reverse the entire sentence word-by-word
// #include <iostream>
// #include <sstream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// string reverseWords(string s) {
//     stringstream ss(s);
//     string word;
//     vector<string> words;

//     // split words
//     while (ss >> word) {
//         words.push_back(word);
//     }

//     // reverse word order
//     reverse(words.begin(), words.end());

//     // join back
//     string result;
//     for (int i = 0; i < words.size(); i++) {
//         result += words[i];
//         if (i != words.size() - 1) result += " ";
//     }
//     return result;
// }

// int main() {
//     string s = "Hello World from C++";
//     cout << reverseWords(s);
//     return 0;
// }
// // Example:
// // Input: "Hello World from C++"
// // Output: "C++ from World Hello" 



// // Case 3. Reverse each word individually but keep order
// #include <iostream>
// #include <sstream>
// #include <algorithm>
// using namespace std;

// string reverseEachWord(string s) {
//     stringstream ss(s);
//     string word, result;
    
//     while (ss >> word) {
//         reverse(word.begin(), word.end());
//         result += word + " ";
//     }
    
//     if (!result.empty()) result.pop_back(); // remove trailing space
//     return result;
// }

// int main() {
//     string s = "Hello World from C++";
//     cout << reverseEachWord(s);
//     return 0;
// }
// // Example:
// // Input: "Hello World from C++"
// // Output: "olleH dlroW morf ++C"