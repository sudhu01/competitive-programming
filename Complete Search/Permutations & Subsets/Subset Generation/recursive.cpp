#include <bits/stdc++.h>
using namespace std;

void search(int k, int n, vector<vector<int>>& subsets, vector<int> subset){
  if(k == n){
    subsets.push_back(subset);
  }
  else{
    search(k + 1, n, subsets, subset);
    subset.push_back(k);
    search(k + 1, n, subsets, subset);
    subset.pop_back();
  }
}


int main(){

  vector<vector<int>> subsets;
  vector<int> subset;

  search(0, 3, subsets, subset);
  
  for(int i = 0; i < subsets.size(); i++){
    for(int j = 0; i < subsets[i].size(); j++){
      cout << subsets[i][j] << " ";
    }
    cout << "; ";
  }
  
  return 0;
}