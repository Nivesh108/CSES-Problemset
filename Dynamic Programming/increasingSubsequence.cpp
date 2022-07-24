#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    vector<int> sequence;
    sequence.push_back(arr[0]);
    
    for(int i = 1; i < n; i++){
        if(arr[i] > sequence.back()) sequence.push_back(arr[i]);
        else{
            int index = lower_bound(sequence.begin(), sequence.end(), arr[i]) - sequence.begin();
            sequence[index] = arr[i];
        }
    }

    cout << sequence.size();

    return 0;
}