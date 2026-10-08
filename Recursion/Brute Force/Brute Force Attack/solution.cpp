#include <bits/stdc++.h>
using namespace std;


void search(string s, unordered_set<string>& res, vector<int> permutation, int n){
    if(permutation.size() == n){
        string s1;
        for(int i: permutation) s1 += s.at(i);
        res.insert(s1);
    }else{
        for(int i = 0; i < n; i++){
            permutation.push_back(i);
            search(s, res, permutation, n);
            permutation.pop_back();
        }
    }
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
    int n;
    cin >> n;
    string s;
    vector<int> permutation;
    unordered_set<string> result;
    
    switch(n){
        case 1:
            cout << 'a' << "\n" << "b" << "\n" << "c";
            break;
        case 2:
            search("ab", result, permutation, n);
            search("bc", result, permutation, n);
            search("ac", result, permutation, n);
            break;
            
        case 3:
            search("abc", result, permutation, n);
            break;
        case 4:
            search("abca", result, permutation, n);
            break;
        case 5:
            search("abcab", result, permutation, n);
            break;
        case 6:
            search("abcabc", result, permutation, n);
            break;
        case 7:
            search("abcabca", result, permutation, n);
            break;
        case 8:
            search("abcabcab", result, permutation, n);
            break;
        default:
            break;
    }
    
    for(string s1: result) cout << s1 << "\n";
}
