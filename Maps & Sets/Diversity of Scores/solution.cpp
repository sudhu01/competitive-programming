#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, t;
	cin >> n >> t;
	
	vector<vector<int>> increments(t, vector<int>(2));
	
	for(int i = 0; i < t; i++){
	    cin >> increments[i][0] >> increments[i][1];
	}
	
	vector<int> scores(n, 0);
	unordered_map<int, int> hash;
	hash[0] = n;
	
	for(int i = 0; i < t; i++){
	    hash[scores[increments[i][0] - 1]]--;
	    if(hash[scores[increments[i][0] - 1]] <= 0){
	        hash.erase(scores[increments[i][0] - 1]);
	    }
	    scores[increments[i][0] - 1] += increments[i][1];
	    hash[scores[increments[i][0] - 1]]++;
	    
	    
	    cout << hash.size() << "\n";
	   
	}

}
