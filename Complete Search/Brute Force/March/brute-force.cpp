#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<char> names(n);

    string s;

    int hash[5] = {0};
    for(int i = 0; i < n; i++){
        cin >> s;
        names[i] = s.front();
        switch(names[i]){
            case 'M':
                hash[0]++;
                break;
            case 'A':
                hash[1]++;
                break;
            case 'R':
                hash[2]++;
                break;
            case 'C':
                hash[3]++;
                break;
            case 'H':
                hash[4]++;
                break;
            default:
                break;
        }
    }

    if(n < 3){
        cout << 0;
    }else{
        int ways = 0;
        for(int i = 0; i < 5; i++){
            for(int j = i + 1; j < 5; j++){
                for(int k = j + 1; k < 5; k++){
                    ways += hash[i]*hash[j]*hash[k];
                }
            }
        }
        cout << ways;
    }

    return 0;
}