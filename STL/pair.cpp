#include <bits/stdc++.h>
#include <utility>
using namespace std;

void explainPair(){
    pair <int, int> p = {1, 3};
    cout << p.first << " " << p.second;
    cout << endl;

    pair <int, pair<int, int>> x = {1, {3, 4}};  
    cout << x.first << " " << x.second.second << " " << x.second.first;
    cout << endl;

    pair <int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}}; // storing array
    cout << arr[1].second;
    cout << endl;
}

int main(){
    explainPair();
    return 0;
}