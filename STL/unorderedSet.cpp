#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<int> us;
    for(int i=0; i<=10; i++){
        us.emplace(i);  // use insert or emplace
    }

    us.emplace(2);        // not accept duplicate(2)
    us.emplace(11);       // accept(11) but not in  sorted order
    for(auto it : us){
        cout << it << endl;
    }

    auto it =  us.find(3);
    if(it != us.end()){
        cout << "Element found: " << *it << endl;
    }else {
        cout << "Element not found: " << endl;
    }

    return 0;
}