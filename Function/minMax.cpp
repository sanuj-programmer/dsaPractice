// Minimum without function
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int num1, num2;
//     cin >> num1 >> num2;
//     int minimum = min(num1,num2);   // inbuilt min function
//     cout << minimum;
//     return 0;
// }





// // Maximum without function
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int num1, num2;
//     cin >> num1 >> num2;
//     int maximum = max(num1,num2);    // inbuilt max function
//     cout << maximum;
//     return 0;
// }




// Maximum with using function
// #include <bits/stdc++.h>
// using namespace std;

// // using return function
// int maxx(int num1, int num2) {  // we can not write max as function b/c it is inbuilt so we have to write anthing else(maxx)
//     if(num1>=num2){
//         return num1;
//     }else {
//         return num2;
//     }
// }
// int main(){
//     int num1, num2;
//     cin >> num1 >> num2;
//     int maximum = maxx(num1,num2);
//     cout << maximum;
//     return 0;
// }


// Maximum with using function
#include <bits/stdc++.h>
using namespace std;

//using void function 
void maxx(int num1, int num2) {  
    if(num1>=num2){
        cout << num1;
    }else {
        cout << num2;
    }
}
int main(){
    int num1, num2;
    cin >> num1 >> num2;
    maxx(num1,num2);
    // cout << maximum;
    return 0;
}