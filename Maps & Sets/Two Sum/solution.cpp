#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, t;
	cin >> n >> t;
	vector<int> nums(n);
	unordered_set<int> hash;
	
	for(int i = 0; i < n; i++){
	    cin >> nums[i];
	    hash.insert(t - nums[i]);
	}
	
	int i1, n2;
	for(int i = 0; i < n; i++){
	    if(hash.count(nums[i])){
	        i1 = i + 1;
	        n2 = t  - nums[i];
	        break;
	    } 
	}
	
	for(int i = 0; i < n; i++){
	    if(nums[i] == n2){
	        cout << i1 << " " << i + 1;
	        break;
	    }
	}

}
