#include<bits/stdc++.h>
#define     ll          long long
#define     ld          long double
#define     vi          vector<int>
#define     vll         vector<long long>
#define     loop(n)     for(int i=0;i<n;i++)
#define     rep(a,b)    for(int i=a;i<b;i++)
#define     t(t)        int t; cin>>t; while(t--) 
#define     fast        ios::sync_with_stdio(0); cin.tie(0);
using namespace std;

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    fast
    ll n,q,a,b;
    ll sum;
    cin>>n>>q;
    vll v(n+1);
    v[0] = 0;
    rep(1,n+1) cin>>v[i];
    while(q--){
        sum=0;
        cin>>a>>b;
        rep(a,b+1){
            sum+= v[i];
        }
        cout<<sum<<"\n";
    }

    return 0;
}