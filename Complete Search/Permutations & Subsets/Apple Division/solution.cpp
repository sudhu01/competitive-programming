#include <bits/stdc++.h>
using namespace std;

void search(vector<vector<int>>& subsets, vector<int> subset, vector<int> weights, int k, int n){
    if(k == n){
        subsets.push_back(subset);
    }
    else{
        search(subsets, subset, weights, k+1, n);
        subset.push_back(weights[k]);
        search(subsets, subset, weights, k+1, n);
        subset.pop_back();
    }
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	
	vector<int> weights(n);
	for(int i = 0; i < n; i++){
	    cin >> weights[i];
	}
	
	vector<vector<int>> subsets;
	vector<int> subset;
	
	search(subsets, subset, weights, 0, n);
	

	int min_diff = numeric_limits<int>::max();
	vector<int> s1, s2;
	
	for(int i = 1; i < subsets.size(); i++){
	    s1 = subsets[i];
	    
	    for(int num: weights){
	        auto it = find(s1.begin(), s1.end(), num);
	        if(it == s1.end()){
	            s2.push_back(num);
	        }
	    }
	    
	    int sum1 = accumulate(s1.begin(), s1.end(), 0);
	    int sum2 = accumulate(s2.begin(), s2.end(), 0);
	    
	    if(abs(sum1 - sum2) < min_diff){
	        min_diff = abs(sum1 - sum2);
	    }
	    
	    s2.clear();
	}
	
	cout << min_diff;

}
