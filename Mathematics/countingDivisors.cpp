#include<bits/stdc++.h>
using namespace std;

// Currently TLE
int main(){
    int t,x,count;
    cin>>t;
    while(t--){
        count=0;
        cin>>x;
        if(x%2!=0){
            for(int i=1;i<=x;i+=2){
                if(x%i==0) count++;
            }
        }
        else{
            count=3;
            x/=2;
            for(int i=4;i<=x;i++){
                if(x%i==0) count++;
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}