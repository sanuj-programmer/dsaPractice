// Below example is synatax of list 
// Rest all the function same as vector


#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> ls;
    ls.push_back(1);
    ls.push_back(2);
    ls.push_back(3);
    for(auto it : ls){
        cout << it << " ";
    }
}






// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     list <int> ls;
//     for(int i=0; i<10; i++){
//         ls.push_back(i);
//     }
//     for(int num : ls){
//         cout << num << " ";
//     }
// }


