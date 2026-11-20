#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	long long n, m;
	cin >> n >> m;
	
	map<long long, long long> events;
    
    long long s, t;
    
    for(int i = 0; i < m; i++){
        cin >> s >> t;
        
        events[s] += 1;
        events[t+1] -= 1;
    }
    
    
    
    long long min_guards = numeric_limits<long long>::max();
    
    for(auto [wall, guard]: events){
        if(guard >= 0 && min_guards > guard) min_guards = guard;
    }
    
    cout << min_guards;

}
