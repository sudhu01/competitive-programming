#include <bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    int size = n*2;
    vector<pair<int, int>> times;
    
    int a, b;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        
        times.push_back({a, 0});
        times.push_back({b, 1});
    }
    
    sort(times.begin(), times.end());
    

    int longest = 0;
    int cur = 0;
    
    for(int i = 0; i < size; i++){
        if(!times[i].second){
            cur++;
        }else{
            if(longest < cur) longest = cur;
            cur = 0;
        }
    }
    
    cout << longest;
}