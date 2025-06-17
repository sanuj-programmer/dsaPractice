// // Maximum heap  - largest element will be at top
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     priority_queue <int> pq;   
//     for(int i=0; i<10; i++){
//         pq.emplace(i);
//     }

//     cout << pq.top() << endl;
//     pq.pop();
//     cout << pq.top() << endl;
//     cout << pq.size();

// }





// Minimum heap - smallest element will be at top
#include <bits/stdc++.h>
using namespace std;

int main(){
    priority_queue <int, vector<int>, greater<int>> pq;   
    for(int i=0; i<10; i++){
        pq.emplace(i);
    }
    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;
    cout << pq.size();
}