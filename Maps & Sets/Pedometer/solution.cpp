#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m;
    cin >> n >> m;
    
    vector<int> remainders(n);
    int x, prefix = 0;
    
    for(int i = 0; i < n; i++){
        cin >> x;
        
        remainders[i] = prefix % m;
        
        prefix += x;
    }
    
    int totalrem = prefix % m;
    
    unordered_map<int, int> totalCount;
    
    for(int r: remainders) totalCount[r]++;
    
    unordered_map<int, int> seen;
    int answer = 0;
    
    for(int i = 0; i < n; i++){
        int r = remainders[i];
        
        answer += totalCount[r] - seen[r] - 1;
        
        int target = (r - totalrem + m) % m;
        
        answer += seen[target];
        
        seen[r]++;
    }
    
    cout << answer;
    
}