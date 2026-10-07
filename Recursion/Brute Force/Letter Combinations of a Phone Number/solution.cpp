#include <bits/stdc++.h>
using namespace std;


void search(vector<vector<int>>& combinations, vector<int> combination, int start, int n, int r){
    if(combination.size() == r){
        combinations.push_back(combination);
    }else{
        for(int i = start; i < n; i++){
            combination.push_back(i);
            search(combinations, combination, i+1, n, r);
            combination.pop_back();
        }
    }
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string digits;
	cin >> digits;
	
	int len = digits.size();
	
    unordered_map<int, string> letters = {{'2', "abc"}, {'3', "def"}, {'4', "ghi"}, {'5', "jkl"}, {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"}};
    
    string mappings;
    
    for(int i = 0; i < digits.size(); i++){
        mappings += letters[digits.at(i)];
    }
    
    vector<vector<int>> combinations;
    vector<int> combination;
    search(combinations, combination, 0, mappings.size(), len);
    
    vector<string> result;
    for(int i = 0; i < combinations.size(); i++){
        string s;
        for(int j = 0; j < len; j++){
            s += mappings.at(combinations[i][j]);
        }
        
        int count = 0, ind = 0;
        for(const char& c: s){
            char c1 = digits[ind++];
            for(const char& c2: letters[c1]){
               if(c == c2){
                    count++;
                    break;
                } 
            }
        }
        if(count == len) result.push_back(s);
    }
    
    for(string s: result) cout << s << " ";

}
