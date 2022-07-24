#include<bits/stdc++.h>
using namespace std;

// Memoization
int findMinCoins(int index, int sum, int coins[], vector<vector<int>> &dp){

    if(index == 0){
        if(sum % coins[0] == 0) return sum / coins[0];
        return 1e6 + 1;
    }

    if(dp[index][sum] != -1) return dp[index][sum];

    int notpick = findMinCoins(index - 1, sum, coins, dp);

    int pick = INT_MAX;
    if(coins[index] <= sum) pick = 1 + findMinCoins(index, sum - coins[index], coins, dp);

    return dp[index][sum] =  min(pick, notpick);

}

int main(){
    
    int n ,sum;
    cin >> n >> sum;

    int coins[n];
    int dp[n][sum + 1] = {};
    for(int i = 0; i < n; i++) cin >> coins[i];

    // Tabulation
    for(int i = 0; i <= sum; i++){
        if(i % coins[0] == 0) dp[0][i] = i / coins[0];
        else dp[0][i] = 1e9;
    }

    for(int i = 1; i < n; i++){
        for(int j = 0; j <= sum; j++){
            int p = dp[i - 1][j];
            int np = 1e9;
            if(j >= coins[i]) np = 1 + dp[i][j - coins[i]];
            dp[i][j] = min(p, np);
        }
    }
    if(dp[n - 1][sum] == 1e9) cout << -1;
    else cout << dp[n - 1][sum];

    return 0;
}