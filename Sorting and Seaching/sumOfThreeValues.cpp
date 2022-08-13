#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

    ll n, sum;
    cin >> n >> sum;
    vector<pair<ll, ll>> v(n);
    for(int i = 0; i < n; ++i){
        cin >> v[i].first;
        v[i].second = i + 1;
    }
    sort(v.begin(),v.end());
    
    for(int i = 0; i < n - 2; i++){
        int j = i + 1, k = n - 1;
        int target = sum - v[i].first;
        while(j < k){
            if(v[j].first + v[k].first == target){
                cout << v[i].second << ' ' << v[j].second << ' ' << v[k].second;
                return 0;
            }
            else if(v[j].first + v[k].first > target) k--;
            else j++;
        }
    }

    cout << "IMPOSSIBLE";

    return 0;
}