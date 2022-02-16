#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int count=1,ans=1;
    for(int i=1;i<s.length();i++){
        if(s[i]==s[i-1]){
            count++;
        }
        else count=1;
        ans=max(count,ans);
    }
    cout<<ans;
    return 0;
}