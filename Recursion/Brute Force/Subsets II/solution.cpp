#include <bits/stdc++.h>
using namespace std;

bool comp(vector<int> v1, vector<int> v2){
    if(v1.size() == v2.size()){
        return v1 < v2;
    }else{
        return v1.size() < v2.size();
    }
}

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
    int n;
    cin >> n;
    
    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];
    
    vector<vector<int>> subsets;
    vector<int> subset;
    
    search(subsets, subset, 0, n);
    
    vector<vector<int>> nums_subsets;
    for(int i = 0; i < subsets.size(); i++){
        vector<int> n_s;
        for(int j = 0; j < subsets[i].size(); j++){
            n_s.push_back(nums[subsets[i][j]]);
        }
        nums_subsets.push_back(n_s);
    }
    
    sort(nums_subsets.begin(), nums_subsets.end(), comp);
    
    vector<int> prev;
    
    for(int i = 0; i < nums_subsets.size(); i++){
        if(i > 1 && prev.size() == nums_subsets[i].size()){
            int count = 0;
            for(int j = 0; j < nums_subsets[i].size(); j++){
                if(prev[j] == nums_subsets[i][j]) count++;
            }
            if(count < prev.size()){
                for(int j = 0; j < nums_subsets[i].size(); j++) cout << nums_subsets[i][j] << " ";
                cout << "\n";
            }
        }else{
            for(int j = 0; j < nums_subsets[i].size(); j++) cout << nums_subsets[i][j] << " ";
            cout << "\n";
        }
        prev = nums_subsets[i];
    }
    
}