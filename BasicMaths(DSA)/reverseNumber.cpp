#include <iostream> 
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n>0){
        int lastDigit = n % 10;
        cout << lastDigit;
        n = n / 10;
    }
}