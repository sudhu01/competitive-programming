#include <bits/stdc++.h>
using namespace std;

void search(int pos, int& count, int n, vector<bool>& chosen){
    if(pos > n){
        count ++;
        return;
    }
    
    for(int i = 1; i <= n; i++){
        if(chosen[i - 1]) continue;
       
        if(i % pos != 0 && pos % i != 0) continue;
        
        chosen[i - 1] = true;
        search(pos+1, count, n, chosen);
        chosen[i - 1] = false;
        
    }
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	
	int count = 0;
	vector<bool> chosen(n, false);
	
	search(1, count, n, chosen);
	
	cout << count;
}
