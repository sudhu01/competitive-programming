#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, k;
    cin >> n >> k;
    
    vector<pair<int, int>> pills(n);
    
    for(int i = 0; i < n; i++){
        cin >> pills[i].first >> pills[i].second;
    }
    
    sort(pills.begin(), pills.end());
    
    int sum = accumulate(pills.begin(), pills.end(), 0, [](int sum, const pair<int, int> pill){
        return sum + pill.second;
    });
    
    if(sum <= k){
        cout << 1;
    }else{
        for(int i = 0; i < n; i++){
            if(sum > k){
                sum -= pills[i].second;
                
            }else{
                cout << pills[i - 1].first + 1;
                break;
            }
        }
    }
    
}