#include<bits/stdc++.h>
#define     ll          long long
#define     MOD         1000000007
#define     t(t)        int t; cin>>t; while(t--) 
#define     fast        ios::sync_with_stdio(0); cin.tie(0);
using namespace std;

ll power(ll a, ll b){
    if(b==1) return a;
    if(b%2==0)  return (pow(a,b/2)*pow(a,b/2));
    else return a*pow(a,b/2)*pow(a,b/2);
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