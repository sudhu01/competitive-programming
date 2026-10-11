#include <bits/stdc++.h>
using namespace std;

void search(vector<vector<char>>& board, int& count, int r, vector<int>& columns, vector<int>& diag1, vector<int>& diag2){
    if(r == 8){
        count++;
        return;
    }
    
    for(int c = 0; c < 8; c++){
        if(board[r][c] == '*' || columns[c] || diag1[r + c] || diag2[c - r + 7]) continue;
        
        columns[c] = 1;
        diag1[r + c] = 1;
        diag2[c - r + 7] = 1;
        
        search(board, count, r+1, columns, diag1, diag2);
        
        columns[c] = 0;
        diag1[r + c] = 0;
        diag2[c - r + 7] = 0;
    }
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	vector<vector<char>> board(8, vector<char>(8));
	
	for(int i = 0; i < 8; i++){
	    for(int j = 0; j < 8; j++) cin >> board[i][j];
	}
	
	vector<int> columns(8, 0);
    vector<int> diag1(15, 0);
    vector<int> diag2(15, 0);
	
	
	int count = 0;
	search(board, count, 0, columns, diag1, diag2);
    
    cout << count;
}
