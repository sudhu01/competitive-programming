#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int a;
    
    cin >> a;
    
    if(400 % a){
        cout << -1;
    }else{
        
        cout << 400 / a;
    }
    
    return 0;
}