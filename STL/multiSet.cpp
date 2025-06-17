#include <bits/stdc++.h>
using namespace std;

int main(){
    multiset<int> ms;
    for(int i=0; i<=10; i++){
        ms.emplace(i);  // use insert or emplace
    }

    ms.emplace(2);        // accept duplicate(2)
    ms.emplace(11);       // accept(11) in  sorted order
    for(auto it : ms){
        cout << it << endl;
    }
    
    auto it =  ms.find(3);
    if(it != ms.end()){
        cout << "Element found: " << *it << endl;
    }else {
        cout << "Element not found: " << endl;
    }

    return 0;
}