#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, k;
	cin >> n >> k;
	
	vector<int> p(n);
	for(int i = 0; i < n; i++){
	    p[i] = i + 1;
	}
	
	vector<vector<int>> permutations;
	
	do{
	    permutations.push_back(p);
	}while(next_permutation(p.begin(), p.end()));
	
	vector<vector<int>> times(n, vector<int>(n));
	
	for(int i = 0; i < n; i++){
	    for(int j = 0; j < n; j++){
	        cin >> times[i][j];
	    }
	}
	
	int count = 0;
	int curTime;
	
	for(int i = 0; i < permutations.size(); i++){
	    curTime = 0;
	    if(permutations[i][0] == 1){
	        for(int j = 0; j < permutations[i].size() - 1; j++){
	            curTime += times[permutations[i][j] - 1][permutations[i][j + 1] - 1];
	        }
	        int last = permutations[i].size() - 1;
	        curTime += times[permutations[i][last] - 1][permutations[i][0] - 1];
	    
	        if(curTime == k){
	            count ++;
	    }
	    }
	}
	
	cout << count;
	
	return 0;

}
