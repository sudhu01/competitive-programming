#include <bits/stdc++.h>
using namespace std;

void divide(long long x, long long& amount){
    if(x < 2) return;
    
    amount += x;
    if(x % 2){
        divide(x/2, amount);
        divide(x/2 + 1, amount);
    }else{
        divide(x/2, amount);
        divide(x/2, amount);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    long long x;
    cin >> x;
    
    long long amount = 0;
    
    divide(x, amount);
    cout << amount;
}