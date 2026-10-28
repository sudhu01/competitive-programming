#include <bits/stdc++.h>
using namespace std;

void search(vector<char>& path, int& count, int r, int c, int p, vector<vector<int>>& board){
    if(r == 6 && c == 0){
        if(p == 48) count++;
        return;
    }
    
    if(r < 0 || r > 6 || c < 0 || c > 6) return;
    
    if(board[r][c]) return;
    
    board[r][c] = 1;
    
    if((r > 0 && r < 6 && board[r-1][c] == 0 && board[r+1][c] == 0 && (c == 0 || board[r][c-1]) && (c == 6 || board[r][c+1])) || (c > 0 && c < 6 && board[r][c-1] == 0 && board[r][c+1] == 0 && (r == 0 || board[r-1][c]) && (r == 6 || board[r+1][c]))){
        board[r][c] = 0;
        return;
    }
    
    if(path[p] == 'U'){
        search(path, count, r-1, c, p+1, board);
    }
    else if(path[p] == 'D'){
        search(path, count, r+1, c, p+1, board);
    }
    else if(path[p] == 'L'){
        search(path, count, r, c-1, p+1, board);
    }
    else if(path[p] == 'R'){
        search(path, count, r, c+1, p+1, board);
    }
    else{
        search(path, count, r-1, c, p+1, board);
        search(path, count, r+1, c, p+1, board);
        search(path, count, r, c-1, p+1, board);
        search(path, count, r, c+1, p+1, board);
    }
    
    p--;
    board[r][c] = 0;
    
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	vector<char> path(48);
	
	
	for(int i = 0; i < 48; i++) cin >> path[i];
	
	int count = 0;
	
	vector<vector<int>> board(7, vector<int>(7, 0));
	search(path, count, 0, 0, 0, board);
	
	cout << count;

}
