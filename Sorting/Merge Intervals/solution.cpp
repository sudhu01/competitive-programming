#include <bits/stdc++.h>
using namespace std;


bool comp(pair<int, int> a, pair<int, int> b){
    if(a.first != b.first) return a < b;
    return a.second > b.second;
    
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    
    int n;
    cin >> n;
    
    vector<pair<int, int>> intervals(n);
    for(int i = 0; i < n; i++){
        cin >> intervals[i].first >> intervals[i].second;
    }
    
    sort(intervals.begin(), intervals.end(), comp);
    
    vector<pair<int, int>> mergedIntervals;
    pair<int, int> p = intervals[0];

    for(int i = 1; i < n; i++){
    
    if(p.second >= intervals[i].first){
        int a = min(p.first, intervals[i].first);
        int b = max(p.second, intervals[i].second);
        if(mergedIntervals.size() && mergedIntervals[mergedIntervals.size() - 1].first == a) mergedIntervals.pop_back();
        mergedIntervals.push_back({a, b});
        
        p = {a,b};
    }
    else{
        mergedIntervals.push_back(intervals[i]);
        p = intervals[i];
    }
    
    }
    
    
    for(int i = 0; i < mergedIntervals.size(); i++){
        cout << mergedIntervals[i].first << " " << mergedIntervals[i].second << "\n";
    }
}