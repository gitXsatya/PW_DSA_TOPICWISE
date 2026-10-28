
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int solve(vector<int>& coins, int amount, vector<vector<int>>& dp) {
    for (int i = 0; i < dp[0].size(); i++)
        dp[0][i] = INT_MAX - 1;

    for (int i = 1; i < dp.size(); i++)
        dp[i][0] = 0;

    for (int j = 0; j < dp[0].size(); j++) {
        if (j % coins[0] == 0)
            dp[1][j] = j / coins[0];
        else
            dp[1][j] = INT_MAX - 1;
    }

    for (int i = 2; i < dp.size(); i++) {
        for (int j = 1; j < dp[0].size(); j++) {
            if (coins[i - 1] <= j) {
                dp[i][j] = min(1 + dp[i][j - coins[i - 1]],
                               dp[i - 1][j]);
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    return dp[coins.size()][amount];
}

int coinChange(vector<int>& coins, int amount) {
    if (coins.empty())
        return amount == 0 ? 0 : -1;

    vector<vector<int>> dp(coins.size() + 1,
                           vector<int>(amount + 1, -1));

    int ans = solve(coins, amount, dp);
    return (ans >= INT_MAX - 1) ? -1 : ans;
}

int main() {
    int n, amount;
    cin >> n;

    vector<int> coins(n);
    for (int i = 0; i < n; i++)
        cin >> coins[i];

    cin >> amount;

    cout << coinChange(coins, amount) << endl;

    return 0;
}
