#include<bits/stdc++.h>
using namespace std;

void generateStrings(set<string> &sett, vector<int> &freq,string &tempStr, string &s){
    if(tempStr.size() == s.size()){
        sett.insert(tempStr);
        return;
    }

    for(int i = 0; i < freq.size(); i++){
        if(!freq[i]){
            tempStr += s[i];
            freq[i] = 1;
            generateStrings(sett, freq, tempStr, s);
            tempStr.pop_back();
            freq[i] = 0;
        }
    }
}

int main(){

    string s, tempString;
    cin >> s;
    set<string> sett;
    vector<int> freq(s.size(), 0);

    generateStrings(sett, freq, tempString, s);

    cout << sett.size() << '\n';

    for(auto str : sett)
        cout << str << '\n';
    
    return 0;
}