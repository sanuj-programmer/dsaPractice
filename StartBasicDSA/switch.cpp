#include <bits/stdc++.h>
using namespace std;

int main(){
    int day;
    cin >> day;
    switch(day) {
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tueday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;  
        default:
            cout << "Invalid";      
    }
    cout << "check";
    return 0;
}