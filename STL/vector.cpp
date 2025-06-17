// #include<bits/stdc++.h>

// using namespace std;

// int main() {
//   vector < int > v;

//   for (int i = 0; i < 10; i++) {
//     v.push_back(i); //inserting elements in the vector
//   }

//   // cout << "the elements in the vector: ";
//   for (auto it = v.begin(); it != v.end(); it++)
//     cout << * it << " ";

//   cout << "\nThe front element of the vector: " << v.front();
//   cout << "\nThe last element of the vector: " << v.back();
//   cout << "\nThe size of the vector: " << v.size();
//   cout << "\nDeleting element from the end: " << v[v.size() - 1];
//   v.pop_back();

//   cout << "\nPrinting the vector after removing the last element:" << endl;
//   for (int i = 0; i < v.size(); i++)
//     cout << v[i] << " ";

//   cout << "\nInserting 5 at the beginning:" << endl;
//   v.insert(v.begin(), 5);
//   cout << "The first element is: " << v[0] << endl;
//   cout << "Erasing the first element" << endl;
//   v.erase(v.begin());
//   cout << "Now the first element is: " << v[0] << endl;

//   if (v.empty())
//     cout << "\nvector is empty";
//   else
//     cout << "\nvector is not empty" << endl;

//   v.clear();
//   cout << "Size of the vector after clearing the vector: " << v.size();

// }






// //pushing element 
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     vector <int> v = {1, 2, 3, 4};   //defining element at the time of declaration
//     v.push_back(6);    // pushing element one by one
//     v.push_back(7);
//     v.emplace_back(8);
//     for(auto it : v){
//         cout << it << " ";
//     }
// }






// // All these 3 method will used for printing the element
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//   vector <int> v(5,100);             //print 5 instance of 100
//   // vector<int> v;             
//   // for(int i = 0; i<10; i++){        //print number o to 9
//   //   v.push_back(i);
//   // }

//   // M1
//   for(int num : v){
//     cout << num << " " ;
//   }
//   cout << endl;

//   // M2
//   for(vector <int> :: iterator it = v.begin(); it != v.end(); it++){
//   cout << *(it) << " ";
//   }
//   cout << endl;

//   // M3
//   for(auto it : v){
//     cout << it << " ";
//   }
// }






// //using function
// #include <bits/stdc++.h>
// using namespace std;

// void print1(){
//   vector<int> v;
//   for(int i = 0; i<10; i++){
//     v.push_back(i);
//   }

//   for(auto it : v){
//     cout << it << " ";
//   }
//   cout << endl;
//   cout << "size: " << v.size();
// }
// int main(){
//   print1();
//   return 0;
// }







// // replacing value from one vector to another
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//   vector <int> v1(5, 100);
//   vector <int> v2(5, 200);
//   vector <int> v3(5,300);
//   vector <int> v4(v1);   //replacing element of vector v3 to v1 getting 
//   v3.swap(v2);          // v3 ka value v2 mein chla jayega and vice versa
//   for(auto it : v4){
//     cout << (it) << " ";
//   }
//   cout << endl;

//   for(auto it : v2){
//   cout << (it) << " ";
//   }
//   cout << endl;
//     for(auto it : v3){
//   cout << (it) << " ";
//   }
// }






// Inserting, erasing element
#include<bits/stdc++.h>
using namespace std;

int main() {
  vector<int> v = {1,2,3,4,5,6};
  v.insert(v.begin(), 10);  // inserting 10 at begin
  v.insert(v.end(), 500);  // inserting 500 at end
  v.insert(v.begin()+1, 2,8);  // two instance of 8 will insert
  v.erase(v.begin(), v.end()); // erasing all element
  v.erase(v.begin()+2, v.begin()+4); // erasing element 3 and 4 only
  v.clear();  // clear all the element of vector
  for(auto it : v){
    cout << it << " ";
  }
}