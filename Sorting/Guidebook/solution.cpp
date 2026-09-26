#include <bits/stdc++.h>
using namespace std;

bool comp(pair<string, vector<int>> a, pair<string, vector<int>> b){
    if(a.first != b.first) return a < b;
    return a.second[1] > b.second[1];
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    vector<pair<string, vector<int>>> cities(n);
    
    string s;
    int score;

    for(int i = 0; i < n; i++){
        cin >> s >> score;
        cities[i].first = s;
        cities[i].second.push_back(i+1);
        cities[i].second.push_back(score);
    }
    
    sort(cities.begin(), cities.end(), comp);
    
    for(pair<string, vector<int>> p: cities) cout << p.second[0] << "\n";
}