#include<bits/stdc++.h>
#define loop(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    loop(n) cin>>v[i];
    sort(v.begin(),v.end());
    int p = v[n/2];
    long long sum=0;
    for(int i : v){
        sum+=abs(i-p);
    }
    cout<<sum;
    return 0;
}