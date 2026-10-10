
#include <iostream>
#include <vector>
using namespace std;

int unboundedknapsack(vector<int> &dice, int sum, vector<vector<int>> &dp) {
    int mod = 1000000009;
    dp[0][0] = 1;

    for(int j = 1; j <= sum; j++) {
        for(int i = 1; i <= 6; i++) {
            if(j >= dice[i-1])
                dp[i][j] = (dp[i][j] + dp[0][j-dice[i-1]]) % mod;
        }
        for(int i = 1; i <= 6; i++)
            dp[0][j] = (dp[0][j] + dp[i][j]) % mod;
    }
    return dp[0][sum];
}

int main() {
    int n;
    cin >> n;
    vector<int> dice;
    for(int i = 1; i <= 6; i++) dice.push_back(i);
    vector<vector<int>> dp(7, vector<int>(n+1, 0));
    cout << unboundedknapsack(dice, n, dp);
}
