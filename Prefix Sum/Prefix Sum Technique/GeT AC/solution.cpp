#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, q;
	cin >> n >> q;
	
	string s;
	cin >> s;
	
	vector<pair<int, int>> queries(q);
	for(int i = 0; i < q; i++) cin >> queries[i].first >> queries[i].second;
	
	vector<int> prefix_sums(n, 0);
	for(int i = 1; i < n; i++){
	    if(s.at(i) == 'C' && s.at(i - 1) == 'A'){
	        prefix_sums[i] = prefix_sums[i - 1] + 1;
	    }else{
	        prefix_sums[i] = prefix_sums[i - 1];
	    }
	}
	
	for(const auto& p: queries){
	    cout << prefix_sums[p.second - 1] - prefix_sums[p.first - 1] << "\n";
	}

	
}
