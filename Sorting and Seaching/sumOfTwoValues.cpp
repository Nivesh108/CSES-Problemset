#include<bits/stdc++.h>
#define         loop(n)     for(int i=0;i<n;i++)
#define         vi          vector<int>
using namespace std;

int main(){

    int n,x;
    cin>>n>>x;
    vi v(n);
    vi p(n);
    loop(n){
        cin>>v[i];
        p[i]=v[i];
    }
    sort(v.begin(),v.end());
    int i=0,j=n-1,a,b;
    bool flag =false;
    while(i<j){
        if(v[i] + v[j] == x){
            a=v[i];
            b=v[j];
            flag = true;
            break;
        }
        else if(v[i] + v[j] > x) j--;
        else i++;
    }
    stack<int> s;
    if(flag){
        loop(n){
            if(p[i]==a){
                if(s.empty()){
                    cout<<i+1<<" ";
                    s.push(i);
                }
                else{
                    if(s.top()==i) continue;
                    else{
                        cout<<i+1<<" ";
                        break;
                    }
                }
            }
            else if(p[i]==b){
                if(s.empty()){
                    cout<<i+1<<" ";
                    s.push(i);
                }
                else{
                    if(s.top()==i) continue;
                    else{
                        cout<<i+1<<" ";
                        break;
                    }
                }
            }
        }
    }
    else cout<<"IMPOSSIBLE";

    return 0;
}