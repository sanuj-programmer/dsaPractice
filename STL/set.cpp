#include <bits/stdc++.h>
using namespace std;

int main(){
    set <int> s;
    for(int i=0; i<=10; i++){
        s.insert(i);  // use insert or emplace
    }
    s.emplace(2);  // not accept duplicate(2)
    s.emplace(11);  // accept(11) in  sorted order
    for(auto it : s){
        cout << it << endl;
    }

    auto it =  s.find(3);
    if(it != s.end()){
        cout << "Element found: " << *it << endl;
    }else {
        cout << "Element not found: " << endl;
    }

    return 0;
}