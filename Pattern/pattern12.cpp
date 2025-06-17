#include <iostream>
using namespace std;

void print12(int n){
    int space = 2 * (n-1);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){     // numbers
            cout << j;
        }
        for(int j=1; j<=space; j++){    // space
            cout << " ";
        }
        for(int j=i; j>=1; j--){   // numbers(j) is decreasing there
            cout << j;
        }
        cout << endl;
        space = space - 2;
    }
}

int main(){
    int n;
    cin >> n;
    print12(n);
    return 0;
}
