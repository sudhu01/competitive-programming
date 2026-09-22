#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int x,n;
    cin >> x >> n;
    
    set<int> lights;
    lights.insert(0);
    lights.insert(x);
    
    multiset<int> passageLengths;
    passageLengths.insert(x);
    
    
    int p, diff;
    for(int i = 0; i < n; i++){
        cin >> p;
        lights.insert(p);
        
        auto it = lights.find(p);
        auto it_left = (--it)++;
        auto it_right = (++it)--;
        diff = *it_right - *it_left;
        
        auto it1 = passageLengths.find(diff);
        passageLengths.erase(it1);
        
        passageLengths.insert(*it - *it_left);
        passageLengths.insert(*it_right - *it);
        
        cout << *passageLengths.rbegin() << " ";
        
        
    }
    
    return 0;
    
    
}