#include <bits/stdc++.h>
using namespace std;

const long long LIMIT = 1000000000000000000;

long long multiply(long long a, long long b){
    if(a > 0 && b > 0 && a > LIMIT / b){
        return -1;
    }
    return a*b;
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<long long> arr(n, 1);

    long long prod;
    cin >> prod;
    
    for(int i = 1; i < n; i++){
        cin >> arr[i];
        prod = multiply(prod, arr[i]);
        if(prod == 1){
            break;
        }
    }

    cout << prod;

    return 0;
}