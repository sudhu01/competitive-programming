#include <bits/stdc++.h>
using namespace std;


void search(vector<vector<int>>& subsets, vector<int> subset, int k, int n){
    if(k == n){
        subsets.push_back(subset);
    }
    else{
        search(subsets, subset, k+1, n);
        subset.push_back(k);
        search(subsets, subset, k+1, n);
        subset.pop_back();
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, k;
    cin >> n >> k;
    
    vector<int> buildings(n);
    for(int i = 0; i < n; i++){
        cin >> buildings[i];
    }
    
    vector<vector<int>> subsets;
    vector<int> subset;
    
    search(subsets, subset, 1, n);
    
    int min;
    int minDiff = numeric_limits<int>::max();
    int curDiff;
    
    
    for(int i = 0; i < subsets.size(); i++){
        if(subsets[i].size() == k - 1){
            min = buildings[0] + 1;
            curDiff = 0;
            for(int j = 0; j < subsets[i].size(); j++){
                if(min >= buildings[subsets[i][j]]){
                    curDiff += min - buildings[subsets[i][j]];
                    min++;
                }
            }
            if(curDiff < minDiff && min == buildings[0] + k){
                minDiff = curDiff;
            }
        }

    }
    
    cout << minDiff;
    
    
    return 0;
}