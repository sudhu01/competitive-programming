#include <bits/stdc++.h>
using namespace std;

void search(vector<vector<int>>& combinations, vector<int> combination, int start, int n, int k){
    if(combination.size() == k){
        combinations.push_back(combination);
    }else{
        for(int i = start; i <= n; i++){
            combination.push_back(i);
            search(combinations, combination, i+1, n, k);
            combination.pop_back();
        }
    }

}

int main(){
    int n, k;
    cin >> n >> k;
    
    vector<vector<int>> combinations;
    vector<int> combination;
    
    search(combinations, combination, 1, n, k);
    
    for(int i = 0; i < combinations.size(); i++){
        for(int j = 0; j < k; j++) cout << combinations[i][j] << " ";
        cout << "\n";
    }
}