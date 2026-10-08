#include <bits/stdc++.h>
using namespace std;

void search(vector<vector<int>>& sums, vector<int> permutation, int start, int n, int k){
    if(permutation.size() == k){
        int sum = accumulate(permutation.begin(), permutation.end(), 0);
        if(sum == n) sums.push_back(permutation);
        return;
    }else{
        for(int i = start; i <= 9; i++){
            permutation.push_back(i);
            search(sums, permutation, i+1, n, k);
            permutation.pop_back();
        }
    }
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
    
    int n, k;
    cin >> k >> n;
    
    vector<vector<int>> sums;
    vector<int> permutation;
    
    search(sums, permutation, 1, n, k);
    
    for(int i = 0; i < sums.size(); i++){
        for(int v: sums[i]) cout << v << " ";
        cout << "\n";
    }
}
