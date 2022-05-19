#include<bits/stdc++.h>
using namespace std;

int main(){

    string s,ans;
    cin >> s;
    int count=0;
    vector<int> v(26);
    for(char c : s) v[c-'A']++;
    for(int i:v){
        if(i%2!=0) count++; 
    }
    if(count > 1) cout<<"NO SOLUTION";
    else{
        for(int i=0;i<26;++i){
            if(v[i]%2==0){
                for(int j=0;j<v[i]/2;++j)
                    ans+=i+'A';
            }
        }
        for(int i=0;i<26;++i){
            if(v[i]%2!=0){
                for(int j=0;j<v[i];++j){
                    ans+=i+'A';
                }
            }
        }
        for(int i=25;i>=0;--i){
            if(v[i]%2==0){
                for(int j=0;j<v[i]/2;++j)
                    ans+=i+'A';
            }
        }
        }
    cout<<ans;
    return 0;
}