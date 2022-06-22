#include<bits/stdc++.h>
# define ll long long
 using namespace std;
 int main(){
    ll n, a, xorr = 0;
    cin >> n;
    for(ll i=1;i<n;i++){
        cin>>a;
        xorr ^= a;
        xorr ^= i;
    }

    cout << (xorr^n);
    
    return 0;
 }