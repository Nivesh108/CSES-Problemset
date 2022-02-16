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
 
void toh(int n,int source,int destination, int aux){
  if(n==1){ 
    cout<<source<<" "<<destination<<endl;
    return;
  }
  toh(n-1,source,aux,destination);
  cout<<source<<" "<<destination<<endl;
  toh(n-1,aux,destination,source);
}
 
int main(){
  fast 
  #ifndef ONLINE_JUDGE 
  io 
  #endif  
  
  int n;
  cin>>n;
  cout<<pow(2,n)-1<<endl;
  toh(n,1,3,2);
 
  return 0;
} 