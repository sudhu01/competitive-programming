#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	
	sort(s.begin(), s.end());
	
	bool isEqual = true;
	for(int i = 1; i < k; i++){
	    if(s.at(i) != s.at(i - 1)){
	        isEqual = false;
	        break;
	    }
	}
	
	if(isEqual){
	    string s1;
	    if((n - k) % 2 && k != 1){
	        for(int i = 1; i < n; i++) s1 += s.at(i);
	    }else{
    	    s1 += s.at(0);
    	    for(int i = k; i < n; i+= k){
    	        s1 += s.at(i);
    	    }
	    }
	    cout << s1;
	}else{
	    cout << s.at(k - 1);
	}

}
