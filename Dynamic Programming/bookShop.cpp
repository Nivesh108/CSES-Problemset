#include<bits/stdc++.h>
using namespace std;

// Memoization
int f(int index, int totalprice, int price[], int pages[], vector<vector<int>> &dp){
    if(totalprice == 0) return 0;
    if(index == 0){
        if(price[0] <= totalprice) return pages[0];
        return 0;
    }
    if(dp[index][totalprice] != -1) return dp[index][totalprice];
    int notpick = f(index - 1, totalprice, price, pages, dp);
    int pick = 0;
    if(price[index] <= totalprice) pick = pages[index] + f(index - 1, totalprice - price[index], price, pages, dp);

    return dp[index][totalprice] = max(pick, notpick);
}

int main(){

    int n, totalPrice;

    cin >> n >> totalPrice;

    int price[n], pages[n];
    for(int i = 0; i < n; ++i) cin >> price[i];
    for(int i = 0; i < n; ++i) cin >> pages[i];

    int dp[n][totalPrice + 1] = {};
    // Tabulation
    for(int i = 0; i <= totalPrice; i++){
        if(i >= price[0]) dp[0][i] = pages[0];
    }
    
    for(int i = 1; i < n; i++){
        for(int j = 1; j <= totalPrice; j++){
            int notpick = dp[i - 1][j];
            int pick = 0;
            if(j >= price[i]) pick = pages[i] + dp[i - 1][j - price[i]];
            dp[i][j] = max(pick, notpick); 
        }
    }
    
    cout << dp[n - 1][totalPrice];

    return 0;
}