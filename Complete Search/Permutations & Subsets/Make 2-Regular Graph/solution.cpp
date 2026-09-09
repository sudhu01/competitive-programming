#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	
	vector<int> edges(n, 0);
	int ind, target;
	for(int i = 0; i < m; i++){
        cin >> ind >> target;
        if(edges[ind - 1] == 0){
            edges[ind - 1] = target;
        }else if(edges[target - 1] == 0){
            edges[target - 1] = ind;
        }
	}
	
	vector<vector<int>> permutations;
	vector<int> permutation;
	for(int i = 1; i <= n; i++){
	    permutation.push_back(i);
	}
	
	int cycleStart, i;
	bool isValid;
	
	do{
	    cycleStart = 0;
	    i = 0;
	    isValid = true;
	    while(i < n){
	        if(permutation[i] == cycleStart + 1 && i - cycleStart < 2 || permutation[i] == i + 1){
	            isValid = false;
	            break;
	        }else if (permutation[i] == cycleStart + 1){
	            cycleStart = i + 1;
	        }
	        i += 1;
	    }
	    
	    if(isValid){
	        permutations.push_back(permutation);
	    }
	}while(next_permutation(permutation.begin(), permutation.end()));

	
	int common;
	int maxCommon = 0;
	for(int i = 0; i < permutations.size(); i++){
	    common = 0;
	    for(int j = 0; j < n; j++){
	        if(permutations[i][j] == edges[j]){
	            common += 1;
	        }
	    }
	    if(maxCommon < common){
	        maxCommon = common;
	    }
	    
	}
	
	cout << m + n - 2*maxCommon;
	
	return 0;
}
