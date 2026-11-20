#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m;
	cin >> n >> m;
	
	vector<int> walls(n+2);
	
	int s, t;
	for(int i = 0; i < m; i++){
	   cin >> s >> t;
	   
	   walls[s] += 1;
	   walls[t+1] -= 1;
	}
	
	int min = numeric_limits<int>::max();
	for(int i = 2; i <= n; i++){
	    walls[i] += walls[i-1];
	    
	    if(min > walls[i]) min = walls[i];
	}
	
	cout << min;

}
