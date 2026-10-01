#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	
	vector<int> arr(n);
	for(int i = 0; i < n; i++){
	    cin >> arr[i];
	}
	
	
	int local_inversions = 0;
	for(int i = 0; i < n - 1; i++){
	    if(arr[i] > arr[i + 1]) local_inversions++;
	}
	
	int global_inversions = 0;
	for(int i = 0; i < n - 1; i++){
	    if(arr[i] < i) global_inversions += i - arr[i];
	}
	
	if(global_inversions == local_inversions){
	    cout << true;
	}else{
	    cout << false;
	}

}
