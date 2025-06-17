// #include <iostream>
// #include <cmath>  // For pow() function
// using namespace std;

// bool isArmstrong(int num) {
//     int originalNum = num, sum = 0;
//     int numDigits = to_string(num).length(); // Count digits

//     while (num > 0) {
//         int digit = num % 10;
//         sum += pow(digit, numDigits);  // Raise digit to the power of numDigits
//         num /= 10;
//     }

//     return (sum == originalNum);
// }

// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     if (isArmstrong(num)) {
//         cout << num << " is an Armstrong number." << endl;
//     } else {
//         cout << num << " is NOT an Armstrong number." << endl;
//     }

//     return 0;
// }








#include <bits/stdc++.h> 
using namespace std;

// Function to check if a
// number is an Armstrong number
bool isArmstrong(int num) {
    // Calculate the number of
    // digits in the given number
    int k = to_string(num).length();
    // Initialize the sum of digits
    // raised to the power of k to 0
    int sum = 0;
    // Copy the value of the input
    // number to a temporary variable n
    int n = num;
    // Iterate through each
    // digit of the number
    while(n > 0){
        // Extract the last
        // digit of the number
        int ld = n % 10;
        // Add the digit raised to
        // the power of k to the sum
        sum += pow(ld, k); 
        // Remove the last digit
        // from the number
        n = n / 10;
    }
    // Check if the sum of digits raised to
    // the power of k equals the original number
    return sum == num ? true : false;
}

int main() {
    int number = 153;
    if (isArmstrong(number)) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }
    return 0;
}
       