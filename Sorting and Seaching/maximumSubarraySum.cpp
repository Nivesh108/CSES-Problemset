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

    fast
    int n;
    cin>>n;
    vi v(n);
    loop(n) cin>>v[i];
    ll sum = LONG_LONG_MIN,localsum=0;
    loop(n){
        localsum+=v[i];
        if(localsum>sum){
            sum=localsum;
        }
        if(localsum < 0)
            localsum = 0;
    }
    cout<<sum;
    return 0;
}