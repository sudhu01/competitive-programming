#include <bits/stdc++.h>
using namespace std;


void search(vector<vector<int>>& subsets, vector<int> subset, int k, int n){
    if(k == n){
        subsets.push_back(subset);
    }else{
        search(subsets, subset, k+1, n);
        subset.push_back(k);
        search(subsets, subset, k+1, n);
        subset.pop_back();
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    vector<int> nums(n);
    
    for(int i = 0; i < n; i++) cin >> nums[i];
    
    vector<vector<int>> subsets;
    vector<int> subset;
    
    search(subsets, subset, 0, n);
    
    for(int i = 0; i < subsets.size(); i++){
        for(int j = 0; j < subsets[i].size(); j++){
            cout << nums[subsets[i][j]] << " ";
        }
        cout << "\n";
    }
    
}