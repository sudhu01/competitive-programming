#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	vector<int> playlist(n);
	
	for(int i = 0; i < n; i++){
	    cin >> playlist[i];
	}
	
	unordered_set<int> uniqueSongs;
	int index = 0, startIndex = 0;
	int maxLen = 0;
	
	while(index < n){
	    if(uniqueSongs.count(playlist[index])){
	        if(uniqueSongs.size() > maxLen){
	            maxLen = uniqueSongs.size();
	        }
	        
	        for(int i = startIndex; i < index; i++){
	            if(playlist[i] == playlist[index]){
	                index = i+1;
	                break;
	            }
	        }
	        
	        startIndex = index;
	        uniqueSongs.clear();
	        uniqueSongs.insert(playlist[startIndex]);
	    }else{
	        uniqueSongs.insert(playlist[index]);
	    }
	    
	    index++;
	}
	
	if(uniqueSongs.size() > maxLen){
	    maxLen = uniqueSongs.size();
	}
	
	cout << maxLen;
	

}
