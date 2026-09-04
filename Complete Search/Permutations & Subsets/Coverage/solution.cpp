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
    
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> subsets;
    vector<int> subset;
    
    search(subsets, subset, 0, n);
    
    vector<vector<int>> sets;
    
    
    int c;
    for(int i = 0; i < m; i++){
        cin >> c;
        vector<int> set(c, -1);
        for(int j = 0; j < c; j++){
            cin >> set[j];
        }
        sets.push_back(set);
    }
    
    vector<int> hash(n+1, 0);
    vector<vector<int>> actual_subset;
    bool check;
    int count = 0;
    
    for(int i = 0; i < subsets.size(); i++){
        check = true;
        if(subsets[i].size() >= 1){
            for(int j : subsets[i]){
                actual_subset.push_back(sets[j]);
            }
            
            for(int j = 0; j < actual_subset.size(); j++){
                for(int k = 0; k < actual_subset[j].size(); k++){
                    hash[actual_subset[j][k]]++;
                }
            }

            for(int i = 1; i <= n; i++){
                if(!hash[i]){
                    check = false;
                    break;
                }
            }
            if(check){
                count++;
            }
            
            hash.assign(n+1, 0);
            actual_subset.clear();
            
        }
        
    }
    
    cout << count;
    
    return 0;
}