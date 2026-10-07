#include <bits/stdc++.h>
using namespace std;


void search(vector<vector<int>>& permutations, vector<int> permutation, vector<bool> chosen, int n){
    if(permutation.size() == n){
        permutations.push_back(permutation);
    }else{
        for(int i = 0; i < n; i++){
            if(chosen[i]) continue;
            chosen[i] = true;
            permutation.push_back(i);
            search(permutations, permutation, chosen, n);
            chosen[i] = false;
            permutation.pop_back();
        }
    }
}

int main(){
    int n;
    cin >> n;
    
    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];
    
    vector<vector<int>> permutations;
    vector<int> permutation;
    vector<bool> chosen(n);
    search(permutations, permutation, chosen, n);
    
    for(int i = 0; i < permutations.size(); i++){
        for(int j = 0; j < n; j++) cout << nums[permutations[i][j]] << " ";
        cout << "\n";
    }
}