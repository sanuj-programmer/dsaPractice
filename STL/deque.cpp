// Below example is synatax of deque
// Rest all the function same as vector


// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     deque <int> dq;
//     for(int i=0; i<10; i++){
//         dq.push_back(i);
//     }

//     for(auto it : dq){
//         cout << it << " ";
//     }
// }





#include <bits/stdc++.h>
using namespace std;

int main(){
    deque <int> dq = {1,2,3,4};
    dq.push_back(0);
    dq.push_front(5);

    for(auto it : dq){
        cout << it << " ";
    }
}