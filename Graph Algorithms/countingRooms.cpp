#include<bits/stdc++.h>
using namespace std;

void dfs(int i, int j, vector<string> &v, int n, int m){
    if(i < 0 || j < 0 || i == n || j == m || v[i][j] == '#') return;
    v[i][j] = '#';
    dfs(i + 1, j, v, n, m);
    dfs(i - 1, j, v, n, m);
    dfs(i, j + 1, v, n, m);
    dfs(i, j - 1, v, n, m);
}

int main(){

    int n, m, rooms = 0;
    cin >> n >> m;

    vector<string> building(n);
    for(int i = 0; i < n; i++) cin >> building[i];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(building[i][j] == '.'){
                rooms++;
                dfs(i, j, building, n, m);
            }
        }
    }
    cout << rooms;
    return 0;
}