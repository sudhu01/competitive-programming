#include <bits/stdc++.h>
using namespace std;


void search(vector<vector<int>>& permutations, vector<int> permutation, int n){
    if(permutation.size() == n){
        permutations.push_back(permutation);
    }
    else{
        for(int i = 1; i <= n; i++){
            permutation.push_back(i);
            search(permutations, permutation, n);
            permutation.pop_back();
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
	int n, k;
	cin >> n >> k;
	
	vector<int> r(n, -1);
	for(int i = 0; i < n; i++){
	    cin >> r[i];
	}
	
	vector<vector<int>> permutations;
	vector<int> p;
	int count;
	
	search(permutations, p, n);
	
	for(int i = 0; i < permutations.size(); i++){
	    if(accumulate(permutations[i].begin(), permutations[i].end(), 0) % k == 0){
	        count = 0;
	        for(int j = 0; j < n; j++){
	            if(permutations[i][j] <= r[j]){
	                count++;
	            }
	        }
	        if(count == n){
	            for(int num: permutations[i]) cout << num << " ";
	            cout << "\n";
	        }
	    }
	}
	
	
	return 0;
}
