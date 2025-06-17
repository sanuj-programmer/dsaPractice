// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     map<int, int> mpp;
//     mpp[1] = 10;
//     mpp.emplace(2, 20);
//     mpp.emplace(3, 30);
//     for(auto it : mpp){
//         cout << it.first << " " << it.second << endl;
//     }
//     return 0;
// }





// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     map<int, pair<int, int>> mpp;

//     mpp.emplace(1, make_pair(10, 40)); // Using make_pair()
//     mpp.emplace(2, make_pair(20, 50));  // key 2 -> have two value (20, 50)
//     mpp.emplace(3, make_pair(30, 60));

//     for (auto it : mpp) {
//         cout << it.first << " " << it.second.first << " " << it.second.second << endl;
//     }

//     return 0;
// }




#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int, pair<int, int>> mpp;
    mpp.insert({1, {10, 40}});
    mpp.insert({2, {20, 50}});
    mpp.insert({3, {30, 60}});

    // mpp[1] = {10, 40};
    // mpp[2] = {20, 50};
    // mpp[3] = {30, 60};


    for (auto it : mpp) {
        cout << it.first << " " << it.second.first << " " << it.second.second << endl;
    }

    return 0;
}

