#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, num;
    cin >> n;

    int size = n - 1;
    int sum = 0;

    for(int i = 0; i < size; i++){
        cin >> num;
        sum += num;
    }
    
    int desired_sum = n*(n+1)/2;

    cout << desired_sum - sum;
    
}