#include <bits/stdc++.h>
using namespace std;

void search(vector<int>& permutation, vector<bool> chosen, int n){
  if(permutation.size() == n){
    for(int i : permutation) cout << i << " ";
    cout << "\n";
  }else{
    for(int i = 1; i <= n; i++){
      if(chosen[i]) continue;
      chosen[i] = true;
      permutation.push_back(i);
      search(permutation, chosen, n);
      chosen[i] = false;
      permutation.pop_back();
    }
  }
}

int main(){

  vector<int> p;
  int n = 3;
  vector<bool> chosen(n + 1, false);

  search(p, chosen, n);

  return 0;
}