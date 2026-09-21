#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    multiset<int> tickets;
    
    int t;
    for(int i = 0; i < n; i++){
        cin >> t;
        tickets.insert(t);
    }
    
    
    int x;
    for(int i = 0; i < m; i++){
        cin >> x;
        
        auto it = tickets.upper_bound(x);
        if(it == tickets.begin()){
            cout << -1 << "\n";
        }else{
            *it--;
            cout << *it << "\n";
            tickets.erase(it);
        }
    }
    
    return 0;
}