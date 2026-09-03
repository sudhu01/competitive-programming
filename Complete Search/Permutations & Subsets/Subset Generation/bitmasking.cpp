#include <bits/stdc++.h>
using namespace std;


int main(){

  vector<vector<int>> subsets;
  int n = 3;

  for(int b = 0; b < (1 << n); b++){
    vector<int> subset;

    for(int i = 0; i < n; i++){
      if(b & (1 << i)) subset.push_back(i);
    }

    subsets.push_back(subset);
  }

  for(int i = 0; i < subsets.size(); i++){
    cout << "{ ";
    for(int j = 0; j < subsets[i].size(); j++){
      cout << subsets[i][j] << " ";
    }
    cout << "} ";
  }


  return 0;
}