#include<bits/stdc++.h>
#define     ll          long long
#define     ld          long double
#define     t(t)        int t; cin>>t; while(t--) 
#define     fast        ios::sync_with_stdio(0); cin.tie(0);
using namespace std;

int main(){

    fast
    ld x1,y1,x2,y2,x3,y3,y,m,x,c;
    t(t){
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        m = (y2-y1)/(x2-x1);
        c = y2 - m*x2;
        y = m*x3 + c;
        if(y == y3) cout<<"TOUCH\n";
        else if(y > y3) cout<<"LEFT\n";
        else cout<<"RIGHT\n";
    }
    return 0;
}