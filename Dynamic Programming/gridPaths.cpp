#include<bits/stdc++.h>
using namespace std;

int m = 1e9 + 7;

int main(){

    int n;
    cin >> n;

    vector<string> grid(n);
    for(int i = 0; i < n; i++){
        cin >> grid[i];
    }

    int dp[n][n] = {};

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(grid[i][j] == '*') dp[i][j] = 0;
            else if(i == 0 && j == 0) dp[i][j] = 1;
            else{
                int up = 0;
                int left = 0;
                if(i > 0) up = dp[i - 1][j];
                if(j > 0) left = dp[i][j - 1];
                dp[i][j] = (up + left) % m;
            }
        }
    }

    cout << dp[n - 1][n - 1];

    return 0;
}