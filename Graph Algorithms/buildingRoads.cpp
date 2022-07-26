#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<int> adj[], int visited[]){
    visited[node] = 1;
    for(auto neighbour : adj[node]){
        if(!visited[neighbour])
        dfs(neighbour, adj, visited);
    }
}

int main()
{
    int n, m, count = 0;
    cin >> n >> m;
    int u, v;
    vector<int> adj[n + 1];
    for(int i = 0; i < m; i++){
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    int visited[n + 1] = {};
    vector<int> ans;
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            count++;
            ans.push_back(i);
            dfs(i, adj, visited);
        }
    }
    int sz = ans.size();
    cout << count - 1 << "\n";
    for(int i = 0; i < sz - 1; i++){
        cout << ans[i] << " " << ans[i + 1] << '\n';
    }
    
    return 0;
}