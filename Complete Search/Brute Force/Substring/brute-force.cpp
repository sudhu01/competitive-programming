#include <bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string S, T;
    cin >> S >> T;

    int count = 0;    

    for(const char c1: T){
        if(S.find(c1) < S.length() && S.find(c1) >= T.find(c1)){
            count += 1;
        }
    }

    cout << T.length() - count;

    return 0;
}