#include<bits/stdc++.h>
#define     ll          long long 
#define     MOD         1000000007
#define     t(t)        int t; cin>>t; while(t--) 
#define     fast        ios::sync_with_stdio(0); cin.tie(0);
using namespace std;

int m = 1e9+7;

ll power(ll a,ll b){
     ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = ((res%m) * (a%MOD))%MOD;
        a = ((a%MOD) * (a%MOD));
        b >>= 1;
    }
    return res;
}

int main(){

    fast
    t(t){
        ll a,b,ans=1;
        cin>>a>>b;
        ans = power(a,b);
        cout<<ans<<"\n";
    }
    return 0;
}