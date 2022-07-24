#include<bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;

int main(){

    int n, sum;

    cin >> n >> sum;

    int coins[n];

    for(int i = 0; i < n; i++) cin >> coins[i];

    int dp[n][sum + 1] = {};

    for(int i = 0; i <= sum; i++){
        if(i % coins[0] == 0) dp[0][i] = 1;
    }

    for(int i = 1; i < n; i++){
        for(int j = 0; j <= sum; j++){
            int nottake = dp[i - 1][j];
            int take = 0;
            if(j >= coins[i]) take = dp[i][j - coins[i]];
            dp[i][j] = (take + nottake) % mod;
        }
    }
    
    cout << dp[n - 1][sum];
    
    return 0;
}