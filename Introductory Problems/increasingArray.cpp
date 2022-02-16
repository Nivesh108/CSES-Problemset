#include<bits/stdc++.h>
# define ll long long
 using namespace std;
 int main(){
    int n;cin>>n;
    int a[n];
    ll sum=0;
    for(int i=0;i<n;i++){cin>>a[i];}
    for(int i=0;i<n-1;i++){
        if(a[i+1]<a[i]){
            sum+=a[i]-a[i+1];
            a[i+1]=a[i];
        }
    }
    cout<<sum;
    return 0;
 }