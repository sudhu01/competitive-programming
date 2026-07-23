#include <bits/stdc++.h>
using namespace std;

void heaviestSnake(vector<int>& snakes, int len, int d){
	int val;
	for(int d1 = 1; d1 <= d; d1++){
		int max = -1e9;
		for(int i = 1; i < len; i += 2){
			val = snakes[i-1]*(snakes[i] + d1);
			if(val > max){
				max = val;
			}
		}
		cout << max << "\n";
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n,d;
	cin >> n >> d;

	int len = n*2;
	vector<int> snakes(len, 0);
	for(int i = 0; i < len; i++){
		cin >> snakes[i];
	}

	heaviestSnake(snakes, len, d);

	return 0;
}