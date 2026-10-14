#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int l, int r){
    while(l < r){
        if(s[l] != s[r]) return false;
        l++;
        r--;
    }
    
    return true;
}

void search(vector<vector<string>>& palindromes, vector<string> partition, string s, int start){
    if(start == s.length()){
        palindromes.push_back(partition);
        return;
    }
    
    for(int end = start; end < s.length(); end++){
        if(!isPalindrome(s, start, end)) continue;
        
        partition.push_back(s.substr(start, end - start + 1));
        
        search(palindromes, partition, s, end+1);
        
        partition.pop_back();
    }
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s;
    cin >> s;
    
    vector<vector<string>> palindromes;
    vector<string> partition;
    
    search(palindromes, partition, s, 0);
    
    for(int i = 0; i < palindromes.size(); i++){
        for(string subs: palindromes[i]) cout << subs << " ";
        cout << "\n";
    }
}
