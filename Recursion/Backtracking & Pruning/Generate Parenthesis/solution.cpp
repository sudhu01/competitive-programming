#include <bits/stdc++.h>
using namespace std;

void search(vector<int> permutation, int start, int k){
    if(permutation.size() == k){
        int zeros = count(permutation.begin(), permutation.end(), 0);
        int ones = count(permutation.begin(), permutation.end(), 1);
        if(ones == zeros){
            int s = k/2;
            int z = 0, o = 0;
            for(int val: permutation){
                if(val){
                    z++;
                    if(z > o) return;
                }else{
                    o++;
                }
            }
            
            for(int val: permutation){
                if(val){
                    cout << ")";
                }else{
                    cout << "(";
                }
            }
            cout << "\n";
        }
        
    }else{
        for(int i = 0; i <= 1; i++){
            permutation.push_back(i);
            search(permutation, i, k);
            permutation.pop_back();
        }
    }
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    vector<int> permutation;
    search(permutation, 0, n*2);
    
}