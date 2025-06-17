#include<bits/stdc++.h>
using namespace std;
int main(){
    int work,result,f1,d1,f2,d2;
    result = work - ((f1*d1)+(f2*d2));
    cin >> work >> f1 >> d1 >> f2 >> d2;
    if(work>((f1*d1)+(f2*d2)))
    {
        cout << result;
    }else{
        cout << "Invalid";
    }
    return 0;
}