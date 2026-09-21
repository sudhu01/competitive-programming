#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    multiset<int, greater<int>> tickets;
    
    int t;
    for(int i = 0; i < n; i++){
        cin >> t;
        tickets.insert(t);
    }
    
    
    vector<int> maxValues(m);
    for(int i = 0; i < m; i++){
        cin >> maxValues[i];
    }
    
    for(int val: maxValues){
        tickets.insert(val);
        auto it = tickets.find(val);
        advance(it, 1);
        if(it == tickets.end()){
            cout << -1 << "\n";
        }else{
            cout << *it << "\n";
            tickets.erase(it);
            it = tickets.find(val);
            tickets.erase(it);
        }
        
    }

}