// Length of Longest Substring without any Repeating Character

// // Brute force
// #include<bits/stdc++.h>

// using namespace std;

// int solve(string str) {

//   if(str.size()==0)
//       return 0;
//   int maxans = INT_MIN;
//   for (int i = 0; i < str.length(); i++) // outer loop for traversing the string
//   {
//     unordered_set < int > set;
//     for (int j = i; j < str.length(); j++) // nested loop for getting different string starting with str[i]
//     {
//       if (set.find(str[j]) != set.end()) // if element if found so mark it as ans and break from the loop
//       {
//         maxans = max(maxans, j - i);
//         break;
//       }
//       set.insert(str[j]);
//     }
//   }
//   return maxans;
// }

// int main() {
//   string str = "takeUforward";
//   cout << "The length of the longest substring without repeating characters is " << 
//   solve(str);
//   return 0;
// }










// //optimized code using vector-  using sliding window having two pointer l and r :
// #include <bits/stdc++.h>

// using namespace std;
//     int lengthofLongestSubstring(string s) {
//       vector < int > mpp(256, -1);

//       int left = 0, right = 0;
//       int n = s.size();
//       int len = 0;
//       while (right < n) {
//         if (mpp[s[right]] != -1)
//           left = max(mpp[s[right]] + 1, left);

//         mpp[s[right]] = right;

//         len = max(len, right - left + 1);
//         right++;
//       }
//       return len;
//     }

// int main() {
//   string str = "cadbzabcd";
//   cout << "The length of the longest substring without repeating characters is " << lengthofLongestSubstring(str);
//   return 0;
// }








// //optimized code using map -  using sliding window having two pointer l and r :
#include <bits/stdc++.h>
using namespace std;

void lengthofLongestSubstring(string s) {
    unordered_map<char, int> mpp;  // map to store last index of each character

    int left = 0, right = 0;
    int n = s.size();
    int len = 0;

    while (right < n) {
        // If character already seen and lies inside current window
        if (mpp.find(s[right]) != mpp.end() && mpp[s[right]] >= left) {
            left = mpp[s[right]] + 1;  // move left pointer ahead
        }

        mpp[s[right]] = right;  // update last index of current character
        len = max(len, right - left + 1);  // update max length
        right++;
    }

    cout << "The length of the longest substring without repeating characters is " << len << endl;
}

int main() {
    string str = "cadbzabcd";
    lengthofLongestSubstring(str);
    return 0;
}




// EXPLANATION:  
// 🔁 while (right < n)
// This loop runs until right pointer reaches the end of the string.

// right is used to extend the window to the right and check each character one by one.
// ✅ Inside the loop:
// 1️⃣ if (mpp.find(s[right]) != mpp.end() && mpp[s[right]] >= left)
// This line checks two conditions:

// Has the character s[right] already appeared before? → mpp.find(s[right]) != mpp.end()
// AND was that character's previous occurrence inside the current window? → mpp[s[right]] >= left
// 🔍 Why check mpp[s[right]] >= left?
// Because if the character appeared before the current window, we don't care about it anymore.

// 2️⃣ left = mpp[s[right]] + 1;
// If the character was inside the current window, it means we have a repeating character. So we move the left pointer to the right of the last occurrence to remove that repetition from the window.

// 💡 Now, your window becomes a fresh non-repeating window again.

// 3️⃣ mpp[s[right]] = right;
// We update the last seen index of the character s[right] in the map mpp.
// Even if this character was already in the map, we overwrite it with the new (latest) position.

// 4️⃣ len = max(len, right - left + 1);
// This is where we update the length of the longest substring without repeating characters:

// Current substring length = right - left + 1
// Compare it with the previous len and keep the maximum one.
// 5️⃣ right++;
// Move right forward to expand the window for the next character.

// 🧠 In Summary:
// Think of it like a sliding window on the string that:

// Expands from the right (right++)
// Shrinks from the left when it hits a duplicate character
// Keeps track of the last index of each character using a map
// Keeps the longest window length without repeating characters
// 📊 Visual Example for "abcab":
// Iteration	left	right	Char	Is Repeated Inside Window?	    Action	                                    Substring	            Length
// 1	        0	    0	    'a'	                No	            Update map, max len = 1	                             a	                   1
// 2	        0	    1	    'b'	                No	            Update map, max len = 2	                             ab	                   2
// 3	        0	    2	    'c'	                No	            Update map, max len = 3	                             abc	               3
// 4	        0	    3	    'a'	               Yes              (a at index 0)	Move left = 0+1=1, max len = 3	     bca	               3
// 5	        1	    4	    'b'	               Yes              (b at index 1)	Move left = 1+1=2, max len = 3	     cab                   3
