#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	
	vector<int> nums(n);
	for(int i = 0; i < n; i++) cin >> nums[i];
	
	int k;
	cin >> k;
	
	int count = 0;
	unordered_map<int, int> freq;
	
	int prefix_sum = 0;
	freq[0] = 1;
	
	for(int i = 0; i < n; i++){
	    prefix_sum += nums[i];
	    count += freq[prefix_sum - k];
	    freq[prefix_sum]++;
	}
	
	cout << count;
}
