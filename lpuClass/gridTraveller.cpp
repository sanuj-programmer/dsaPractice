#include <iostream>
using namespace std;

int uniquePaths(int m, int n) {
    if(m == 0 || n == 0) return 0;
    if(m == 1 && n == 1) return 1;
    // return uniquePaths(m - 1, n) + uniquePaths(m, n - 1);
    int downwards = uniquePaths(m - 1, n);
    int upwards = uniquePaths(m, n - 1);
    return downwards + upwards;
}

int main() {
    int m = 3, n = 3;
    cout << "Unique Paths for a " << m << "x" << n << " grid: " << uniquePaths(m, n) << endl;
    return 0;
}
