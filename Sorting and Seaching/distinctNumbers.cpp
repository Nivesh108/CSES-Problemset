#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define ll long long
#define ull unsigned long long
#define t(t) int t; cin>>t; while(t--)
#define rep(i,a,b)  for(int i=a;i<b;i++)
const int M=1e9+7;
const int p=1e6;
 
int main(){
#ifndef ONLINE_JUDGE 
	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);
#endif
  ios::sync_with_stdio(0);
  cin.tie(0);
 
  ll n,count=1;
  cin>>n;
  ll a[n];
  for(ll i=0;i<n;i++){
    cin>>a[i];
  }
  sort(a,a+n);
  for(ll i=1;i<n;i++){
    if(a[i]!=a[i-1]) count++;
  }
  cout<<count;
  return 0;
}