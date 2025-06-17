#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int coinChange(vector<int>& coins, int amount) {
    if (amount == 0) return 0;
    if (amount < 0) return INT_MAX;

    int minCoins = INT_MAX;
    for (int coin : coins) {
        int res = coinChange(coins, amount - coin);
        if (res != INT_MAX) {
            minCoins = min(minCoins, res + 1);
        }
    }

    if (minCoins == INT_MAX) {
        return -1;
    } else {
        return minCoins;
    }
}

int main() {
    vector<int> coins = {1, 2, 5};
    int amount = 11;
    cout << "Minimum coins required: " << coinChange(coins, amount) << endl;
    return 0;
}
