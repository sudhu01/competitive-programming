#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	
	vector<long long> A(n);
	vector<long long> A1(n);
	vector<long long> B(n);
	vector<long long> B1(n);
	
	for(int i = 0; i < n; i++){
	    cin >> A[i] >> B[i];
	    A1[i] = A[i];
	    B1[i] = B[i];
	}
	
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());
	
	long long start, end;
	if(n % 2){
	    int m = n / 2;
	    start = A[m];
	    end = B[m];
	}else{
	    int m = n / 2;
	    start = ceil((A[m] - A[m - 1]) / 2);
	    end = ceil((B[m] - B[m - 1]) / 2);
	}
	
	long long distance = 0;
	for(int i = 0; i < n; i++){
	    distance += abs(start - A1[i]);
	    
	    distance += B1[i] - A1[i];
	    
	    distance += abs(end - B1[i]);
	}
	
	cout << distance;

}
