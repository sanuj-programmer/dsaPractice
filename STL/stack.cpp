// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     stack <int> st;
//     for(int i=0; i<=10; i++){
//         st.push(i);
//     }
//     st.push(15);
//     cout << st.top() << endl;
//     st.pop();
//     cout << st.top() << endl;
//     cout << st.size() << endl;
// }





#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int> s1, s2;
    s1.emplace(1);
    s1.emplace(2);
    s2.emplace(3);
    s2.emplace(4);
    s1.swap(s2);
    cout << s1.top() << endl;
    cout << s2.empty();  // as stack is not empty it will give 0
}