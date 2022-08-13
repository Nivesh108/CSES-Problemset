#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll mod = 1e9 + 7;

vector<vector<ll>> multiply(vector<vector<ll>> &a,vector<vector<ll>> &b){
    vector<vector<ll>> ans(2, vector<ll>(2));
    ans[0][0] = (((a[0][0] * b[0][0]) % mod) + ((a[0][1] * b[1][0]) % mod)) % mod;
    ans[0][1] = (((a[0][0] * b[0][1]) % mod) + ((a[0][1] * b[1][1]) % mod)) % mod;
    ans[1][0] = (((a[1][0] * b[0][0]) % mod) + ((a[1][1] * b[1][0]) % mod)) % mod;
    ans[1][1] = (((a[1][0] * b[0][1]) % mod) + ((a[1][1] * b[1][1]) % mod)) % mod;
    return ans;
}

vector<vector<ll>> pow(vector<vector<ll>> &m, ll n){
    auto res = m;

    while(n > 0){
        if(n & 1)
            res = multiply(res, m);
        m = multiply(m, m);
        n = n >> 1;
    }
    return res;
}

int main(){
    
    ll n;
    cin >> n;
    if(n <= 1){
        cout << n;
        return 0;
    }
    vector<vector<ll>> v = {{1, 1}, {1, 0}};
    v = pow(v, n - 2);

    cout << v[0][0];
    return 0;
}