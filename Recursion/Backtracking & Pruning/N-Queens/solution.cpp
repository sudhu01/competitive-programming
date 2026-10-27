#include <bits/stdc++.h>
using namespace std;


void nQueens(vector<vector<char>> board, vector<bool> column, vector<bool> diag1, vector<bool> diag2, int n, int r){
    if(r == n){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++) cout << board[i][j] << " ";
            cout << "\n";
        }
        cout << "\n";
        return;
    }
    
    for(int c = 0; c < n; c++){
        if(column[c] || diag1[r + c] || diag2[c - r + n - 1]) continue;
        
        column[c] = diag1[r+c] = diag2[c-r+n-1] = true;
        
        board[r][c] = 'Q';
        nQueens(board, column, diag1, diag2, n, r+1);
        board[r][c] = '.';
        
        column[c] = diag1[r+c] = diag2[c-r+n-1] = false;
    }
}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	
	vector<vector<char>> board(n, vector<char>(n, '.'));
    vector<bool> column(n, false);
    vector<bool> diag1(2*n - 1, false);
    vector<bool> diag2(2*n, false);
    
    nQueens(board, column, diag1, diag2, n, 0);
    
}
