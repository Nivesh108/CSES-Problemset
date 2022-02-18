#include<bits/stdc++.h>
#define loop(n) for(int i=0;i<n;i++)
using namespace std;

int main(){

    int a[26]={0},count=0,localcount;
    string s;
    cin>>s;
    int len = s.length();
    loop(len){
        a[s[i]-'A']++;
    }
    loop(26){
        if(a[i]%2!=0) count++;
    }
    if(count>1) cout<<"NO SOLUTION";
    else{
        if(count==1){
            loop(26){
                localcount=0;
                if(a[i]%2==0){
                    localcount=a[i];
                    while(a[i]--!=localcount/2) cout<<string(i+"A");
                    
                }
            }
        }
        else{

        }
    }
    
    return 0;
}