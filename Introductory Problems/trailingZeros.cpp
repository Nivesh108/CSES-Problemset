#include <bits/stdc++.h>
#define vi vector<int>
#define ll long long
#define ull unsigned long long
#define t(t) int t; cin>>t; while(t--)
#define loop(n) for(int i=0;i<n;i++)
#define endl "\n"
#define fast ios::sync_with_stdio(0);\
             cin.tie(0);
#define io   freopen("input.txt","r",stdin); \
             freopen("output.txt","w",stdout);
const long long M=1000000007;
using namespace std;
 
int main(){
  fast 
  #ifndef ONLINE_JUDGE 
  io 
  #endif 
  
    ll n,count=0;
    cin>>n;
    for (ll i = 5; n / i >= 1; i *= 5)
        count += n / i;
      cout<<count<<endl;
 
  return 0;
} 