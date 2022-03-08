#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,index,mn=INT_MAX;
    cin>>n;
    vector<int> v(n);
    set<int> s;
    for(int i=0;i<n;++i) cin>>v[i];
    for(int i=1;i<=n;++i){
        cin>>index;
        s.insert(index);
        auto p = s.find(index);
        cout<<v[index-1]<<" ";
    }
    return 0;
}