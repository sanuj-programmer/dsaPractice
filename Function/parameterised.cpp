// #include <bits/stdc++.h>
// using namespace std;

// void printName(string name) {   // parameterised function
//     cout << "Hey " << name << endl;
// }
// int main() {
//     string name;
//     cin >> name;
//     printName(name);
//     return 0;
// }







#include <stdio.h>
#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;


void printTemp(int choice, int temp){
    int C, F;
    if(choice == 1){
        cout << (temp - 32) * 5 / 9;
    }
    else if(choice == 2){
        cout << (temp * 9 / 5) + 32;
    }
    else{
        cout << "Invalid choice";
    }
}
int main(){
    int choice, temp;
    cin >> choice;
    cin >> temp;
    printTemp(choice, temp);
    return 0;

}