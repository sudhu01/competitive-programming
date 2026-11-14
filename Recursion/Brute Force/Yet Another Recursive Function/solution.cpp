#include <bits/stdc++.h>
using namespace std;

long long fn(long long x){
    if(x == 0) return 1;
    
    return fn(x/2)+fn(x/3);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    long long x;
    cin >> x;
    
    cout << fn(x);
}