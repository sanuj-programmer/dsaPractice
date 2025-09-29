#include <iostream>
#include <string>
using namespace std;

int main(){
    char name[40];
    cout << "Enter your name: " << endl;
    cin.getline(name, 40);
    cout << name << endl;
}

