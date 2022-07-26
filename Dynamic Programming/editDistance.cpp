#include<bits/stdc++.h>
using namespace std;

int main(){

    string s,t;

    cin >> s >> t;
    int n = s.size(), m = t.size();
    vector<int> curr(m + 1), prev(m + 1);

    for(int i = 0; i <= m; i++) prev[i] = i;

    for(int i = 1; i <= n; i++){
        curr[0] = i;
        for(int j = 1; j <= m; j++){
            if(s[i - 1] == t[j - 1]) curr[j] = prev[j - 1];
            else curr[j] = 1 + min({prev[j - 1], curr[j - 1], prev[j]});
        }
        prev = curr;
    }
    cout << prev[m];
    return 0;
}