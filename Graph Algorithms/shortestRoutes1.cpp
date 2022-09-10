#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    ll n, m;
    cin >> n >> m;
    ll u, v, w;
    vector<pair<ll, ll>> adj[n];

    for(ll i = 0; i < m; i++){
        cin >> u >> v >> w;
        u--;
        v--;
        adj[u].push_back({v, w});
    }

    vector<ll> distance(n, __LONG_LONG_MAX__);

    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    pq.push({0, 0});
    distance[0] = 0;

    while(!pq.empty()){
        ll dist = pq.top().first;
        ll node = pq.top().second;
        pq.pop();
        if(dist > distance[node])
            continue;
        
        for(auto it = adj[node].begin(); it != adj[node].end(); it++){
            ll nextdist = it -> second;
            ll child = it -> first;
            if(distance[node] + nextdist < distance[child]){
               distance[child] = distance[node] + nextdist;
               pq.push({distance[child], child});
            }
        }
    }
    
    for(ll i = 0; i < n; i++) cout << distance[i] << ' ';

    return 0;
}