#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    
    if(n == 0){
        cout << 0 << "\n";
        return 0;
    }
    
    set<int> nums;
    int x;
    for(int i = 0; i < n; i++){
        cin >> x;
        nums.insert(x);
    }
    
    int setSize = nums.size();

    vector<int> differences;
    auto it = nums.begin();
    auto it1 = next(it);
    
    while(it1 != nums.end()){
        int diff = *it1 - *it;
        
        differences.push_back(diff);
        
        it = it1;
        it1++;
    }
    
    int max = 0;
    int curMax = 1;
    
    for(int d: differences){
        if(d == 1){
            curMax++;
        }
        else{
            if(curMax > max) max = curMax;
            curMax = 1;
        }
    }
    
    if(curMax > max) max = curMax;
    
    cout << max;
    
    return 0;
}