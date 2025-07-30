// Naive approach:
// Intuition: As we know fib(i) = fib(i-1) + fib(i-2).Simply iterate and go on calculating the ith term in the series.
// Take an array say fib of size n+1.The 0th term and 1st term are 0 and 1 respectively.So fib(0)=0 and fib(1)=1.
// Now iterate from 2 to n and calculate fib(n).fib(n)=fib(n-1) + fib(n-2).
// Then print fib(0) + fib(1) + …………fib(n).
// Output:
// The Fibonacci Series up to 5th term:
// 0 1 1 2 3 5
// Time Complexity: O(n)+O(n), for calculating and printing the Fibonacci series.
// Space Complexity: O(n), for storing Fibonacci series.


// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//   int n = 5;
//   if (n == 0) {
//     cout << 0;
//   } else if (n == 1) {
//     cout << 0 << " " << 1 << "\n";
//   } else {
//     int fib[n + 1];
//     fib[0] = 0;
//     fib[1] = 1;
//     for (int i = 2; i <= n; i++) {
//       fib[i] = fib[i - 1] + fib[i - 2];
//     }
//     cout<<"The Fibonacci Series up to "<<n<<"th term:"<<endl;
//     for (int i = 0; i <= n; i++) {
//       cout << fib[i] << " ";
//     }
//   }
// }





// // Using  recursion:
// // Time Complexity: O(2^N)

#include<bits/stdc++.h>
using namespace std;

int fibonacci(int N){
   
   // Base Condition.
   if(N <= 1)
   {
       return N;
   }

   // Problem broken down into 2 functional calls
   // and their results combined and returned.
   int last = fibonacci(N-1);
   int slast = fibonacci(N-2);
   
   return last + slast;

}

int main(){
  
  // Here, let’s take the value of N to be 4.
  int N = 4;
  cout<<fibonacci(N)<<endl;
  return 0;

}
