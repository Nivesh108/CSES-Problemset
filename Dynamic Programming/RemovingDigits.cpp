#include<bits/stdc++.h>
using namespace std;

int maxDigit(int n){
    int p=-1;
    while(n!=0){
        p = max(p,n%10);
        n = n/10;
    }
    return p;
}

long long numberOfSteps(int n){
    long long steps = 0;
    int max_digit;
    while(n!=0){
        max_digit = maxDigit(n);
        n -= max_digit;
        steps++;
    }

    return steps;
}

int main(){
    int n;
    cin>>n;
    cout<<numberOfSteps(n);
    return 0;
}