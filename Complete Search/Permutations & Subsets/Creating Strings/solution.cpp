#include <bits/stdc++.h>
using namespace std;


void search(vector<vector<int>>& permutations, vector<int>& permutation, vector<bool> chosen, int n){
    if(permutation.size() == n){
        permutations.push_back(permutation);
    }
    else{
        for(int i = 0; i < n; i++){
            if(chosen[i]) continue;
            chosen[i] = true;
            permutation.push_back(i);
            search(permutations, permutation, chosen, n);
            chosen[i] = false;
            permutation.pop_back();
        }
    }
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	
	string s;
	cin >> s;
	
	int n = s.length();
	
	vector<vector<int>> permutations;
	vector<int> permutation;
	vector<bool> chosen(n, false);
	
	search(permutations, permutation, chosen, n);
	
	vector<string> totalStrings;
	string s1;
	
	for(int i = 0; i < permutations.size(); i++){
	    s1 = "";
	    for(int j = 0; j < n; j++){
	        s1 += s[permutations[i][j]];
	    }
	    
	    auto it = find(totalStrings.begin(), totalStrings.end(), s1);
	    if(it == totalStrings.end()){
	        totalStrings.push_back(s1);
	    }
	    
	}
	
	cout << totalStrings.size() << "\n";

	for(int i = 0; i < totalStrings.size(); i++){
	    cout << totalStrings[i] << "\n";
	}
	
	return 0;

}
