#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, q;
	cin >> n >> q;
	
	vector<int> arr(n);
	for(int i = 0; i < n; i++) cin >> arr[i];
	
	vector<pair<int, int>> queries(q);
	for(int i = 0; i < q; i++) cin >> queries[i].first >> queries[i].second;
	
	vector<int> prefix_sum_array(n+1, 0);
	
	for(int i = 1; i <= n; i++){
	    prefix_sum_array[i] = prefix_sum_array[i - 1] + arr[i - 1];
	}
	
	int a, b;
	for(int i = 0; i < q; i++){
	    a = queries[i].first;
	    b = queries[i].second;
	    
	    cout << prefix_sum_array[b] - prefix_sum_array[a - 1] << "\n";
	}
	

}
