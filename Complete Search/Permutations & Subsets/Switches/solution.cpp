#include <bits/stdc++.h>
using namespace std;


int main() {
	int n,m;
	cin >> n >> m;
	
	int s;
	unordered_map<int, vector<int>> bulbsAndSwitches;
	for(int i = 0; i < m; i++){
	    cin >> s;
	    vector<int> switches(s);
	    for(int j = 0; j < s; j++){
	        cin >> switches[j];
	    }
	    
	    bulbsAndSwitches[i] = switches;
	}
	
	vector<int> p(m);
	for(int i = 0; i < m; i++){
	    cin >> p[i];
	}
	
	vector<vector<int>> combinations;
	
	
	
	for(int b = 0; b < (1 << n); b++){
	    vector<int> combination;
	    for(int i = 0; i < n; i++){
	        if(b & (1 << i)){
	            combination.push_back(1);
	        }else{
	            combination.push_back(0);
	        } 
	    }
	    
	    combinations.push_back(combination);
	}
	
	int count = 0;
	int switchOnCount;
	int bulbOnCount;
	
	for(int c = 0; c < combinations.size(); c++){
	    
	    bulbOnCount = 0;
	    for(const auto& [bulb, value] : bulbsAndSwitches){
    	    switchOnCount = 0;
    	    for(int i = 0; i < value.size(); i++){
    	        if(combinations[c][value[i] - 1]){
    	            switchOnCount++;
    	        }
    	    }
    	    
    	    if(switchOnCount % 2  == p[bulb] % 2){
    	        bulbOnCount++;
    	    }
    	}
    	if(bulbOnCount == m){
    	    count += 1;
    	}
	}
	
	cout << count;
	
	
}
