#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b){
    if(a.first != b.first) return a < b;
    return a.second > b.second;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	vector<pair<int, int>> ranges(n);
	
	map<pair<int, int>, int> positions;
	
	for(int i = 0; i < n; i++){
	    cin >> ranges[i].first >> ranges[i].second;
	    positions[ranges[i]] = i;
	}
	
	sort(ranges.begin(), ranges.end(), comp);
	
	vector<int> contains(n, 0);
	vector<int> belongsTo(n, 0);
	
	for(int i = 1; i < n; i++){
	    if(ranges[i].second <= ranges[i - 1].second && ranges[i].first >= ranges[i - 1].first){
	        int pos = positions[ranges[i - 1]];
	        contains[pos] = 1;
	    }
	}
	
	int maxIndex = 0;
	
	for(int i = 1; i < n; i++){
	    if(ranges[i].second <= ranges[maxIndex].second && ranges[i].first >= ranges[maxIndex].first){
	        int pos = positions[ranges[i]];
	        belongsTo[pos] = 1;
	    }else if(ranges[i].second > ranges[maxIndex].second){
	        maxIndex = i;
	    }
	}
	
	for(int i = 0; i < n; i++) cout << contains[i] << " ";
	cout << "\n";
	for(int i = 0; i < n; i++) cout << belongsTo[i] << " ";
	
}
