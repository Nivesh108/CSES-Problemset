#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){

    ll n,sum;
    cin>>n;
    sum =(n*(n+1)/2);
    if(sum%2!=0) cout<<"NO";
    else{
        cout<<"YES\n";
        if(n%2==0){
            vector<ll> a,b;
            ll i=1,j=n;
            while(i+1<j-1){
                a.push_back(i);
                a.push_back(j);
                b.push_back(i+1);
                b.push_back(j-1);
                i+=2;
                j-=2;
            }
            cout<<a.size()<<"\n";
            for(auto i:a) cout<<i<<" ";
            cout<<"\n";
            cout<<b.size()<<"\n";
            for(auto i:b) cout<<i<<" ";
        }
        else{
            cout<<"LOL\n";
            vector<ll> a,b;
            
        }
    }

    return 0;
}