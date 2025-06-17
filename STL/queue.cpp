// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     queue <int> q;
//     for(int i=0; i<=10; i++){
//         q.emplace(i);
//     }

//     q.emplace(15);
//     cout << q.front() << endl;
//     q.pop();
//     cout << q.front() << endl;
//     cout << q.size();
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

int main(){
    queue <int> q;
    for(int i=0; i<=10; i++){
        q.emplace(i);
    }

    cout << q.front() << endl;  // front->0
    q.pop();                   // zero removed
    q.back()+=10;             // add 10 to last element
    q.front()+=15;            // add 15 to first element
    cout << q.back() << endl;
    cout << q.front() << endl;
    return 0;
}