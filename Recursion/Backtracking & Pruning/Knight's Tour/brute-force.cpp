#include <bits/stdc++.h>
using namespace std;

int indexMap(int i, int j){
    return 8*i + (j + 1);
}

bool tour(vector<int>& board, int i, int j){
    if(board.size() == 64) return true;
    
    if(i < 0 || i > 7 || j < 0 || j > 7) return false;
    
    int pos = indexMap(i, j);
    
    if(find(board.begin(), board.end(), pos) != board.end()){
        return false;
    }
    
    board.push_back(pos);
    
    bool output = tour(board, i+2, j+1) || tour(board, i+2, j-1) || tour(board, i+1, j+2) || tour(board, i+1, j-2) || tour(board, i-1, j+2) || tour(board, i-1, j-2) || tour(board, i-2, j+1) || tour(board, i-2, j-1);
    
    if(output) return true;
    
    board.pop_back();
    

    return false;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    vector<int> board;
    
    int i, j;
    cin >> i >> j;
    
    tour(board, i, j);
    
    for(int i = 0; i < 64; i++){
        cout << board[i] << " ";
    }
}