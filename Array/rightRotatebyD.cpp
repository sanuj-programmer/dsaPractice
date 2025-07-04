// #include <iostream>  //Brute
// using namespace std;
// void Rotatetoright(int arr[], int n, int k)
// {
//   if (n == 0)
//     return;
//   k = k % n;
//   if (k > n)
//     return;
//   int temp[k];
//   for (int i = n - k; i < n; i++)
//   {
//     temp[i - n + k] = arr[i];
//   }
//   for (int i = n - k - 1; i >= 0; i--)
//   {
//     arr[i + k] = arr[i];
//   }
//   for (int i = 0; i < k; i++)
//   {
//     arr[i] = temp[i];
//   }
// }
// int main()
// {
//   int n = 7;
//   int arr[] = {1, 2, 3, 4, 5, 6, 7};
//   int k = 2;
//   Rotatetoright(arr, n, k);
//   cout << "After Rotating the elements to right " << endl;
//   for (int i = 0; i < n; i++)
//   {
//     cout << arr[i] << " ";
//   }
//   return 0;
// }

// Output:
// After Rotating the elements to right 6 7 1 2 3 4 5
// Time Complexity: O(n)
// Space Complexity: O(k) since k array element needs to be stored in temp array







#include <iostream>    //Optm
using namespace std;
// Function to Reverse the array
void Reverse(int arr[], int start, int end)
{
  while (start <= end)
  {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}
// Function to Rotate k elements to right
void Rotateeletoright(int arr[], int n, int k)
{
  // Reverse first n-k elements
  Reverse(arr, 0, n - k - 1);
  // Reverse last k elements
  Reverse(arr, n - k, n - 1);
  // Reverse whole array
  Reverse(arr, 0, n - 1);
}
int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int n = 7;
  int k = 2;
  Rotateeletoright(arr, n, k);
  cout << "After Rotating the k elements to right ";
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;
  return 0;
}

// Output:
// After Rotating the k elements to right 6 7 1 2 3 4 5
// Time Complexity - O(N) where N is the number of elements in an array
// Space Complexity - O(1) since no extra space is required