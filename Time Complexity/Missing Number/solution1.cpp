#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, num;
    cin >> n;

    int size = n - 1;

    vector<int> hash(n + 1, 0);

    for(int i = 0; i < size; i++){
        cin >> num;
        hash[num] += 1;
    }

    for(int i = 1; i <= n; i++){
        if(!hash[i]){
            cout << i;
            break;
        }
    }    
    
}