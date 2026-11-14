#include <bits/stdc++.h>
using namespace std;


int getGrid(int i, int j){
    return (i / 3)*3 + (j / 3);
}

bool rowCheck(char num, int i, vector<vector<char>>& board){
    for(int j = 0; j < 9; j++){
        if(num == board[i][j]) return false;
    }
    
    return true;
}

bool colCheck(char num, int j, vector<vector<char>>& columns){
    for(int i = 0; i < 9; i++){
        if(num == columns[j][i]) return false;
    }
    
    return true;
}

bool gridsCheck(char num, int i, int j, vector<vector<char>>& grids){
    int gridNumber = getGrid(i, j);
    
    for(int g = 0; g < 9; g++){
        if(num == grids[gridNumber][g]) return false;
    }
    
    return true;
}

bool sudokuSolver(vector<vector<char>>& board, int pos, vector<vector<char>>& columns, vector<vector<char>>& grids){
    if(pos == 81) return true;
    
    int i = pos / 9;
    int j = pos % 9;
    
    if(board[i][j] != '.'){
        return sudokuSolver(board, pos+1, columns, grids);
    }
    
    for(char num = '1'; num <= '9'; num++){
        if(rowCheck(num, i, board) && colCheck(num, j, columns) && gridsCheck(num, i, j, grids)){
            
            board[i][j] = num;
            columns[j][i] = num;
            
            int gridNumber = getGrid(i, j);
            
            grids[gridNumber][(i % 3)*3 + (j % 3)] = num;
            
            if(sudokuSolver(board, pos+1, columns, grids)){
                return true;
            }
            
            board[i][j] = '.';
            columns[j][i] = '.';
            
            grids[gridNumber][(i % 3)*3 + (j % 3)] = '.';
        }
    }
    
    return false;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	vector<vector<char>> board(9, vector<char>(9));
	
	vector<vector<char>> columns(9, vector<char>(9));
	
	vector<vector<char>> grids(9, vector<char>(9));
	
	for(int i = 0; i < 9; i++){
	    for(int j = 0; j < 9; j++){
	        cin >> board[i][j];
	        
	        int gridNumber = getGrid(i, j);
	        grids[gridNumber][(i % 3)*3 + (j % 3)] = board[i][j];
	        
	        columns[j][i] = board[i][j];
	    }
	}
	
	sudokuSolver(board, 0, columns, grids);
	
	for(int i = 0; i < 9; i++){
	    for(int j = 0; j < 9; j++) cout << board[i][j] << " ";
	    cout << "\n";
	}
}
