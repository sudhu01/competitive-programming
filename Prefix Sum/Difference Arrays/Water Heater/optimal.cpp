#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	long long n, w;
	cin >> n >> w;
	
	vector<pair<int, int>> events;
	
	long s,t,p;
	
	for(int i = 0; i < n; i++){
	    cin >> s >> t >> p;
	    
	    events.push_back({s, p});
	    events.push_back({t , -p});
	}
	
	string output = "Yes";
	long long current = 0;
	
	sort(events.begin(), events.end());
	
	for(auto [timestamp, update] : events){
	    current += update;
	    
	    if(current > w){
	        output = "No";
	        break;
	    }
	}
	
	cout << output;

}
