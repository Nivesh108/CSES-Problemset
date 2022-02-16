#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#define ll long long
#define ull unsigned long long
#define t(t) int t; cin>>t; while(t--)
const long long M=1000000007;
using namespace std;
 
int main(){
#ifndef ONLINE_JUDGE 
  freopen("input.txt","r",stdin); 
  freopen("output.txt","w",stdout);
#endif
  ios::sync_with_stdio(0);
  cin.tie(0);  
  
  ll n;
  cin>>n;
  ll a[n+1];
  a[0]=0;
  a[1]=2;
  for(int i=2;i<=n;i++){
    a[i]=(a[i-1]*2)%M;
  }
  cout<<a[n];
 
  return 0;
}