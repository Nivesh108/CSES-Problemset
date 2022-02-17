#include<bits/stdc++.h>
#define     ll          long long
#define     MOD         1000000007
#define     vi          vector<int>
#define     vll         vector<long long>
#define     fast        ios::sync_with_stdio(0); cin.tie(0);
using namespace std;

int main(){
    // Done in linear but required in Log(n)
    fast
    ll n,f_zero = 0, f_one = 1,ans;
    cin>>n;
    if(n==0) cout<<f_zero;
    else if(n==1) cout<<f_one;
    else{
        for(ll i=2;i<=n;i++){
            ans = (f_zero + f_one) % MOD;
            f_zero = f_one;
            f_one = ans;
        }
    cout<<ans;
    }
    return 0;
}