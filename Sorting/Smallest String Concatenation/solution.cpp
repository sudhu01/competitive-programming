#include <bits/stdc++.h>
using namespace std;

bool comp(string s1, string s2){
    string s1_1 = s1;
    sort(s1_1.begin(), s1_1.end());
    
    string s2_2 = s2;
    sort(s2_2.begin(), s2_2.end());
    
    if(s1_1 != s2_2){
        return s1.length() >= s2.length();
    }
    
    return s1 < s2;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    vector<string> strings(n);
    
    for(int i = 0; i < n; i++){
        cin >> strings[i];
    }
    
    sort(strings.begin(), strings.end(), comp);
    
    
    string final;
    for(string s: strings) final += s;
    
    cout << final;
}