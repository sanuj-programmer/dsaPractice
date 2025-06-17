#include <iostream>
using namespace std;

int main (){
    int n;
    cin >> n;
    int count = 0;

    while(n>0){
        n = n / 10;
        count++;
    }

    cout << count ;
    return 0;
}






// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int cnt = (n == 0) ? 1 : log10(n) + 1;  // Logarithmic approach

//     cout << cnt;
//     return 0;
// }
