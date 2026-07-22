#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    while(n > 1){
        cout << n << " ";
        if(n % 2){
            n = n*3 + 1;
        }
        else{
            n = n/2;
        }
    }

    if(n == 1){
        cout << n;
    }

    return 0;
}