#include <bits/stdc++.h>
using namespace std;


bool wordSearch(vector<vector<char>>& board, string& word, int r, int c, int ind){
    
    int m = board.size();
    int n = board[0].size();
    if(ind == word.length()) return true;
    
    if(r < 0 || r >= m || c < 0 || c >= n) return false;
    
    if(board[r][c] != word[ind]) return false;
    
    char original = board[r][c];
    board[r][c] = '#';
    
    bool output = wordSearch(board, word, r+1, c, ind+1) || wordSearch(board, word, r, c+1, ind+1) || wordSearch(board, word, r-1, c, ind+1) || wordSearch(board, word, r, c-1, ind+1);
    
    board[r][c] = original;
    
    return output;
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int m, n;
    cin >> m >> n;
    
    vector<vector<char>> board(m, vector<char>(n));
    
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++) cin >> board[i][j];
    }
    
    string word;
    cin >> word;
    
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(wordSearch(board, word, i, j, 0)){
                cout << 1 << "\n";
                return 0;
            }   
        }
    }
    
    cout << 0 << "\n";
    return 0;
    
}