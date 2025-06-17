// #include<bits/stdc++.h>
// using namespace std;

// void print(int i, int n){
//     if(i>n){
//         return;
//     }
//     print(i+1, 1);     // wrong logic
//     cout << i << endl;
// }

// int main(){
//     int n;
//     cin >> n;
//     print(n, n);
//     return 0;
// }




#include<bits/stdc++.h>
using namespace std;

void print(int n , int i)
{
    if(n<i){
        return;
    }
    print(n,i+1);
    cout<<i<<" ";
}

int main()
{
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    print(n,1);
}






