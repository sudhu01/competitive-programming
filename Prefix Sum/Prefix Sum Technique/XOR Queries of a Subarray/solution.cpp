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
	
	vector<int> prefix_xors(n+1, 0);
	for(int i = 1; i <= n; i++){
	    prefix_xors[i] = prefix_xors[i - 1] ^ arr[i - 1];
	    
	}
	
	for(const auto& p: queries){
	    int x = prefix_xors[p.second + 1] ^ prefix_xors[p.first];
	    cout << x << "\n";
	}

	
}
