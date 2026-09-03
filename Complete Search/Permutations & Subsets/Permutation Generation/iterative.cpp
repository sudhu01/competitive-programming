#include <bits/stdc++.h>
using namespace std;

int main(){

  vector<int> p = {1, 2, 3};

  do{
    for(int i: p){
      cout << i << " ";
    }
    cout << "\n";
  }while(next_permutation(p.begin(), p.end()));

  return 0;
}