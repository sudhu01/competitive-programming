#include <bits/stdc++.h>
using namespace std;

void search(vector<vector<int>>& combinations, vector<int> combination, int t, vector<int> candidates){
    int sum = accumulate(combination.begin(), combination.end(), 0);
    if(sum == t){
        sort(combination.begin(), combination.end());
        int s = combinations.size();
        if(s > 0 && combination.size() == combinations[s - 1].size()){
            bool check = true;
            for(int i = 0; i < combination.size(); i++){
                if(combination[i] != combinations[s - 1][i]){
                    check = false;
                    break;
                }
            }
            
            if(!check){
              combinations.push_back(combination);  
            }
        }else{
            combinations.push_back(combination);
        }
    }else if(sum < t){
        for(int num: candidates){
            combination.push_back(num);
            search(combinations, combination, t, candidates);
            combination.pop_back();
        }
    }
    return;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, target;
	cin >> n;
	vector<int> candidates(n);
	
	for(int i = 0; i < n; i++) cin >> candidates[i];
	cin >> target;
	
	sort(candidates.begin(), candidates.end(), greater<>());
	
	vector<vector<int>> combinations;
	vector<int> c;
	search(combinations, c, target, candidates);
	
	for(int i = 0; i < combinations.size(); i++){
	    for(int val: combinations[i]) cout << val << " ";
	    cout << "\n";
	}

}
