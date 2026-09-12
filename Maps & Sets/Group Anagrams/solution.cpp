#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	vector<string> strs(n);

	for(int i = 0; i < n; i++){
	    cin >> strs[i];
	}
	
	vector<vector<string>> groups;
	unordered_set<string> unique;
	
	string s, s1;
	
	for(int i = 0; i < n; i++){
	    s = strs[i];
	    sort(s.begin(), s.end());
	    if(unique.count(s)){
	        for(int j = 0; j < groups.size(); j++){
	            s1 = groups[j][0];
	            sort(s1.begin(), s1.end());
	            if(s1== s){
	                groups[j].push_back(strs[i]);
	            }
	        }
	    }else{
	        unique.insert(s);
	        groups.push_back({strs[i]});
	    }
	}
	
	for(int i = 0; i < groups.size(); i++){
	    for(int j = 0; j < groups[i].size(); j++) cout << groups[i][j] << " ";
	    cout << "\n";
	}

}
