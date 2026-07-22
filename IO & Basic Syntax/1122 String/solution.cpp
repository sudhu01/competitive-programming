#include <bits/stdc++.h>
using namespace std;

string checker(string t){
    int len = t.length();
    if(len % 2){
        return "No";
    }

    int bound = len/2;
    for(int i = 1; i <= bound; i++){
        if(t[2*i - 2] != t[2*i - 1]){
            return "No";
        }
    }

    int hash[26] = {0};
    for(const char& c: t){
        hash[(int)c - 97] += 1;
    }

    for(int i = 0; i < 26; i++){
        if(hash[i] != 0 && hash[i] != 2){
            return "No";
        }
    }

    return "Yes";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string T;
    cin >> T;


    cout << checker(T);
    

    return 0;
}