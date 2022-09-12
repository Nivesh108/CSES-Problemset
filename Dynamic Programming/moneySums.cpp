#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    int sum = accumulate(v.begin(), v.end(), 0);
    
    vector<vector<bool>> dp(n, vector<bool>(sum + 1));
    
    for(int i = 0; i < n; i++) dp[i][0] = true;
    dp[0][v[0]] = true;
    int count = 0;

    for(int i = 1; i < n; i++){
        for(int j = 1; j <= sum; j++){
            bool np = dp[i - 1][j];
            bool p = false;
            if(j >= v[i]) p = dp[i - 1][j - v[i]];
            dp[i][j] = p | np;
        }
    }

    for(int i = 1; i <= sum; i++){
        if(dp[n - 1][i]) count++;
    }

    cout << count << endl;
    for(int i = 1; i <= sum; i++){
        if(dp[n - 1][i]) cout << i << ' ';
    }

    return 0;
}