#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){

    ll n, sum;
    cin >> n >> sum;

    vector<pair<ll, ll>> v(n);
    vector<ll> ans;
    for(int i = 0; i < n; i++){
        cin >> v[i].first;
        v[i].second = i + 1;
    }    

    sort(v.begin(), v.end());

    for(int i = 0; i < n - 3; i++){
        for(int j = i + 1; j < n - 2; j++){
            ll target = sum - v[i].first - v[j].first;
            int low = j + 1, high = n - 1;
            while(low < high){
                if(v[low].first + v[high].first == target){
                    cout << v[i].second << ' ' << v[j].second << ' ' << v[low].second << ' ' << v[high].second;
                    return 0;
                }
                else if(v[low].first + v[high].first > target) high--;
                else low++;
            }
        }
    }

    cout << "IMPOSSIBLE";

    return 0;
}