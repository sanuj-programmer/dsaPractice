// Explanation:
// Using a Specific Data Type (int, float, etc.)
// Use a specific data type when you need to return a value from a function.
// The return type must match the type of value the function returns.


// #include <bits/stdc++.h>
// using namespace std;

// int sum(int num1, int num2) {
//     int num3 = num1 + num2;
//     return num3;
// }
// int main() {
//     int num1, num2;
//     cin >> num1 >> num2;
//     int res = sum(num1, num2);
//     cout << "The sum is " << res << endl;
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int mul(int num1, int num2) {
//     return num1 * num2;
// }

// int main(){
//     int num1, num2;
//     cin >> num1 >> num2;
//     int result = mul(num1, num2);
//     cout << result << endl;
// }






#include <iostream>
using namespace std;

// Function to convert temperature based on user choice
int printTemp(int choice, int temp) {
    if (choice == 1) {  // Convert Fahrenheit to Celsius
        return (temp - 32) * 5 / 9;
    } 
    else if (choice == 2) {  // Convert Celsius to Fahrenheit
        return (temp * 9 / 5) + 32;
    } 
    else {
        return -1; // Invalid choice
    }
}

int main() {
    int choice, temp;
    
    cout << "Enter 1 for Fahrenheit to Celsius, 2 for Celsius to Fahrenheit: ";
    cin >> choice;
    
    cout << "Enter temperature: ";
    cin >> temp;

    int result = printTemp(choice, temp);
    
    if (result != -1) {
        cout << "Converted Temperature: " << result << endl;
    } else {
        cout << "Invalid Choice!" << endl;
    }
    
    return 0;
}
