#include<bits/stdc++.h>
#define     ll          long long
#define     ld          long double
#define     t(t)        int t; cin>>t; while(t--) 
#define     fast        ios::sync_with_stdio(0); cin.tie(0);
using namespace std;

int main(){

    fast
    ll x1,y1,x2,y2,x3,y3,mx,my,mx2,my2;
    t(t){
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        mx = x2 - x1;
        my = y2 - y1;
        mx2 = x3 - x2;
        my2 = y3 -y2;
        if(my*mx2 == mx*my2) cout<<"TOUCH\n";
        else if(my*mx2 > mx*my2) cout<<"RIGHT\n";
        else cout<<"LEFT\n";
    }
    return 0;
}