#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a,b,c,d;
    cin >> a >> b >> c >> d;

    int m = max(a, max(b , max(c, d))); 
    int hash[m + 1] = {0};
    hash[a] += 1;
    hash[b] += 1;
    hash[c] += 1;
    hash[d] += 1;

    sort(hash, hash + m + 1);
    if(hash[m] == 3 && hash[m - 1] == 1 || hash[m] == 2 && hash[m - 1] == 2){
        cout << "Yes";
    }
    else{
        cout << "No";
    }

    return 0;

}