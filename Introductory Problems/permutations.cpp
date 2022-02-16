#include<bits/stdc++.h>
# define ll long long
 using namespace std;
 int main(){
    int n;cin>>n;
    if(n==2||n==3) cout<<"NO SOLUTION";
    else if(n==4) cout<<2<<" "<<4<<" "<<1<<" "<<3;
    else{
            for(int i=1;i<=n;i++){
                if(i%2!=0){ cout<<i<<" ";}
            }
            for(int i=1;i<=n;i++){
                if(i%2==0){ cout<<i<<" ";}
            }
    }
    return 0;
 }
