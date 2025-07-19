// Array :  Array is a linear data structure where all elements are arranged sequentially.
// It is a collection of elements of same data type stored at contiguous memory locations. 
// The first element is not confirmed where it is present but other element will definitely along with 1st element if 1st one will 


// ip: 10,15,20,25,30 ; op: 25 
// #include <bits/stdc++.h>
// using namespace std;

// int main (){
//     int arr[5];  // size of array is 5  
//     cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];  // indexing of array
//     // indexing is always one less than array size if array size is 5 than indexing atart with 0 and end with 4.

//     cout << arr[3] << endl;
//     return 0;
// }  



// add 40 to the 3rd element(25) and give o/p as 65
// ip: 10,15,20,25,30 ; op: 25
// #include <bits/stdc++.h>
// using namespace std;

// int main (){
//     int arr[5];   
//     cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];  
//     arr[3]+=40;    
//     cout << arr[3] << endl;
//     return 0;
// }     



// update the element like for 25 i want it as 16
// ip: 10,15,20,25,30 ; op: 25
#include <bits/stdc++.h>
using namespace std;

int main (){
    int arr[5];   
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];  
    arr[3]=16;    
    cout << arr[3] << endl;
    return 0;
}    

