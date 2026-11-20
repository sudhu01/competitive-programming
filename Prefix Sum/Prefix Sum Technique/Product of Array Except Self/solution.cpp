#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	
	vector<int> nums(n);
	for(int i = 0; i < n; i++) cin >> nums[i];
	
	
	vector<int> prefixes(n, 1);
	for(int i = 1; i < n; i++){
	    prefixes[i] = nums[i-1]*prefixes[i-1];
	}
	
	vector<int> suffixes(n, 1);
	for(int i = n - 2; i >= 0; i--){
	    suffixes[i] = nums[i+1]*suffixes[i+1];
	}
	
	for(int i = 0; i < n; i++){
	    cout << prefixes[i]*suffixes[i] << " ";
	}

}
