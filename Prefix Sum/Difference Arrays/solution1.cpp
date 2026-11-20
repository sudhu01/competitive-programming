#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	long long n, w;
	cin >> n >> w;
	
	vector<long long> timestamps(n+2, 0);
	
	long long s, t, p;
	
	for(long long i = 0; i < n; i++){
	    cin >> s >> t >> p;
	    
	    timestamps[s] += p;
	    timestamps[t] -= p;
	}
	
	string output = "Yes";
	for(long long i = 2; i < n+2; i++){
	    timestamps[i] += timestamps[i-1];
	    
	    if(timestamps[i] > w){
	        output = "No";
	        break;
	    }
	}
	
	cout << output;
	

}
