// 1. Char Array Without '\0' (Null Terminator) like a normal array with charcter data type
// It is just a collection of characters, not a string.
char arr1[] = {'H', 'e', 'l', 'l', 'o'};
// Memory layout:
// arduino
// | 'H' | 'e' | 'l' | 'l' | 'o' |
// Size = 5.


    // 2 and 3 are the ways to represent strings; C strings to C++ strings are explained below.

//  2. C-Style String (from C) or  Char Array With '\0' (Null Terminator)
// It is a string in C (C-style string).
// In C++ you can still use the old null-terminated char arrays:
char arr2[] = {'H', 'e', 'l', 'l', 'o', '\0'};
// or simply
char arr3[] = "Hello";  // Compiler automatically adds '\0'
// Memory layout:
// arduino
// | 'H' | 'e' | 'l' | 'l' | 'o' | '\0' |
// These behave like C strings → require '\0', 
// and functions come from <cstring> like strlen, strcpy, strcmp, etc.


// 🔹 3. C++ std::string (Modern Way)
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "Hello";     // ✅ Easy string initialization
    string s2 = " World";

    // Concatenation
    string s3 = s1 + s2;
    cout << s3 << endl;  // Output: Hello World

    // Length
    cout << "Length: " << s3.size() << endl;

    // Access character
    cout << "First char: " << s3[0] << endl;

    // Substring
    cout << "Substring: " << s3.substr(6, 5) << endl; // World

    // Comparison
    if(s1 == "Hello") {
        cout << "Equal" << endl;
    }

    return 0;
}



// can we use  C-Style String (from C) in cpp
// char cstr[] = "Hello";   // {'H','e','l','l','o','\0'}

// Yes ✅ absolutely!
// C++ is a superset of C (with some differences), so you can use C-style strings in C++ without any issue.
//  Notes:
// char cstr[] = "Hello"; is 100% valid in C++.
// It creates a null-terminated char array → so it’s a valid C string.
// In C++ you just get two choices:
// C-style strings (char[], char* + <cstring> functions)
// C++ strings (std::string + .size(), .substr(), +, etc.)

// #include <iostream>
// #include <cstring>   // for strlen, strcpy, strcat, etc.

// using namespace std;

// int main() {
//     // C-style string
//     char cstr[] = "Hello";   // {'H','e','l','l','o','\0'}

//     cout << "C-style string: " << cstr << endl;           // prints Hello
//     cout << "Length: " << strlen(cstr) << endl;           // 5
//     cout << "Size (with \\0): " << sizeof(cstr) << endl;  // 6

//     // Operations using <cstring>
//     char cstr2[20] = "World";
//     strcpy(cstr2, cstr);    // copy
//     strcat(cstr2, " C++");  // concatenate

//     cout << "After strcpy + strcat: " << cstr2 << endl;

//     return 0;
// }
