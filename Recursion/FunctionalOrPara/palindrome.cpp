// Recursive Approach:

// In this approach, we check the string using functional recursion where firstly, the letters on the two ends of the string (start, end) are compared to see if they’re the same or not.
// If they are the same then we simply call recursion for the next elements (start+1, end-1) and so on until the start becomes greater than or equal to the end. 
// If at any point the start and the end differ, we return false stating that the string is not a palindrome.
// Otherwise, if the base condition is reached, then the string is obviously a palindrome and we return true.
// Let us understand it through a recursive code:




#include <iostream>
using namespace std;

bool palindrome(int i, string& s){
    
// Base Condition
// If i exceeds half of the string means all the elements 
// are compared, we return true.

    if(i>=s.length()/2) return true;
    
    // If the start is not equal to the end, not the palindrome.
    if(s[i]!=s[s.length()-i-1]) return false;
    
    // If both characters are the same, increment i and check start+1 and end-1.
    return palindrome(i+1,s);
}

int main() {
	
	// Example string.
	string s = "madam";
	cout<<palindrome(0,s) << endl;        // Print 1 for true, 0 for false 
	// cout << (ispalindrome(0, s) ? "true" : "false"); // but if you want to print o/p as true or false than instead of palindrome use ispalindrome fun.
	return 0;
}







// Another Approach:

// Run a for loop till half the length of the string in order to check the first and last character of the string.
// And check if the first and last elements of the string are equal. And then move both pointers first pointer forward and last pointer backward.
// Here we are achieving this with the help of ‘i’ which moves with them for a loop. First element can be get by str[i] and last element by str[str.length() - i - 1]). 
// If this condition gets executed then it is not palindrome and returns false.
// If the loop ends after traversing elements till half of the length then, it is Palindrome and returns false.


// #include<bits/stdc++.h>
// using namespace std;

// bool isPalindrome(string s) {

//         int left = 0, right = s.length()-1;
//         while(left<right)
//         {
//             if(!isalnum(s[left])) 
//                 left++;
//             else if(!isalnum(s[right])) 
//                 right--;
//             else if(tolower(s[left])!=tolower(s[right])) 
//                 return false;
//             else {
//                 left++; 
//                 right--;
//             }
//         }
//         return true;

// }
// int main() {

//   string str = "ABCDCBA";
//   bool ans = isPalindrome(str);

//   if (ans == true) {
//     cout << "Palindrome";
//   } else {
//     cout << "Not Palindrome";
//   }
//   return 0;
// }









