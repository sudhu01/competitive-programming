#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	
	vector<int> nums(n);
	for(int i = 0; i < n; i++) cin >> nums[i];
	
	vector<int> prefix_sums(n+1);
	
	for(int i = 1; i <= n; i++){
	    prefix_sums[i] = prefix_sums[i - 1] + nums[i - 1];
	}
	

	int idx = -1;
	
	for(int i = 0; i < n - 1; i++){
	    if(prefix_sums[i] == prefix_sums[n] - prefix_sums[i+1]){
	        idx = i;
	        break;
	    }
	}
	
	if(prefix_sums[n-1] == 0) idx = n - 1;
	
	cout << idx;
}
