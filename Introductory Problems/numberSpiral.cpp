#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ull unsigned long long
 
int main(){
#ifndef ONLINE_JUDGE
	//for getting input from input.txt
	freopen("input.txt","r",stdin);	
	//for writing output to output.txt
	freopen("output.txt","w",stdout);
#endif
 
  ll t,x,y;cin>>t;
	
	while(t--){ 
			cin>>y>>x;
			if(x>=y){
			if(x%2!=0&&y==1) cout<<(ll)x*x<<endl;
			else if(x%2==0&&y==1) cout<<(ll)(x-1)*(x-1)+1<<endl;
			else if(x%2!=0) cout<<(ll)x*x-y+1<<endl;
			else if(x%2==0) cout<<(ll)(x-1)*(x-1)+y<<endl;
			}
			else{
				if(x==1&&y%2==0) cout<<(ll)y*y<<endl;
				else if(x==1&&y%2!=0) cout<<(ll)(y-1)*(y-1)+1<<endl;
				else if(y%2==0) cout<<(ll)y*y-x+1<<endl;
				else if(y%2!=0) cout<<(ll)(y-1)*(y-1)+x<<endl;
			}
    } 
	return 0;
 
}