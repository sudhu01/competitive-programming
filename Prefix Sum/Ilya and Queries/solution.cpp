#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string s;
	cin >> s;
	
	int q;
	cin >> q;
	
	vector<pair<int, int>> queries(q);
	for(int i = 0; i < q; i++) cin >> queries[i].first >> queries[i].second;
	
	int n = s.length();
	vector<int> check_sum(n, 0);
	
	for(int i = 1; i < n; i++){
	    if(s.at(i) == s.at(i-1)){
	       check_sum[i] = check_sum[i - 1] + 1; 
	    }else{
	        check_sum[i] = check_sum[i - 1];
	    }
	}

	
	for(int i = 0; i < q; i++){
	    cout << check_sum[queries[i].second - 1] - check_sum[queries[i].first - 1] << "\n";
	}
	
}