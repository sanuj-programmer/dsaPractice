// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int age;
//     cin >> age;
//     if(age>=18){
//         cout << "age is " << age << " " << "Adult" << endl;
//     }else {
//         cout << "age is " << age << " " << "Minor" << endl;
//     }
//     return 0;
// }




// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int marks;
//     cin >> marks;
//     if(marks<25){
//         cout << "F" << endl;
//     }else if(25<=marks && marks<=44){
//         cout << "E" << endl;
//     }else if(45<=marks && marks<=49){
//         cout << "D" << endl;
//     }else if(50<=marks && marks<=59){
//         cout << "C" << endl;
//     }else if(60<=marks && marks<=79){
//         cout << "B" << endl;
//     }else if(80<=marks && marks<=100){
//         cout << "A" << endl;
//     }else {
//         cout << "Invalid input" << endl;
//     }

//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int marks;
//     cin >> marks;
//     if(marks<25){
//         cout << "F" << endl;
//     }else if(marks<=44){
//         cout << "E" << endl;
//     }else if(marks<=49){
//         cout << "D" << endl;
//     }else if(marks<=59){
//         cout << "C" << endl;
//     }else if(marks<=79){
//         cout << "B" << endl;
//     }else if(marks<=100){
//         cout << "A" << endl;
//     }else {
//         cout << "Invalid input" << endl;
//     }

//     return 0;
// }


// Nested if else problem
#include <bits/stdc++.h>
using namespace std;
int main() {
    int age;
    cin >> age;
    if(age < 18){
        cout << "Not eligible for job";
    }else if(age <= 57){
        cout << "Eligible for job";
    if(age>=55){
            cout << "but retirement soon";
        }
    }
        // cout << "Eligible for job, but retirement soon";
    else {
        cout << "Retirement time";
    }

    return 0;
}