#include<bits/stdc++.h>
#define     ll          long long
#define     MOD         1000000007
#define     vi          vector<int>
#define     vll         vector<long long>
#define     fast        ios::sync_with_stdio(0); cin.tie(0);
using namespace std;

// calculating nth fibonacci in log(n) time using matrix exponentiation

// void power(ll m[2][2], ll n){
//     if(n==1||n==0) return;
//     if(n%2==0) multiply(m,x);
// }


void multiply(ll m[2][2],ll n[2][2]){
    ll a,b,c,d;
    a = ( m[0][0]*n[0][0] + m[0][1]*n[1][0] ) % MOD;
    b = ( m[0][0]*n[0][1] + m[0][1]*n[1][1] ) % MOD;
    c = ( m[1][0]*n[0][0] + m[1][0]*n[1][0] ) % MOD;
    d = ( m[1][0]*n[0][1] + m[1][1]*n[1][1] ) % MOD;

    m[0][0] = a;
    m[0][1] = b;
    m[1][0] = c;
    m[1][1] = d;
}
 
ll fibonacci(ll n){
    ll m[2][2] = {{1,1},{1,0}};
    // power(m,n);
    return m[0][0];
}

int main(){
    
    fast
    ll n;
    cin>>n;
    cout<<fibonacci(n);
    return 0;
}