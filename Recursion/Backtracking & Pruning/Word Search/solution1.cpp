#include <bits/stdc++.h>
using namespace std;


int getFirstChar(vector<char>& board, char c, int prev){
    int pos = -1;
    
    for(int i = prev; i < board.size(); i++){
        if(board[i] == c){
            pos = i;
            break;
        }
    }
    
    return pos;
}

void wordSearch(vector<char>& board, int m, int n, string& word, vector<bool> visited, int checkCount, int cur, int prev, bool& result){
    
    if(checkCount == word.length()){
        result = true;
        return;
    }

    if(!checkCount){
        cur = getFirstChar(board, word.at(0), prev);
        prev = cur;
    }
    
    if(cur == -1) return;
    if(visited[cur]) return;
    
    if(word[checkCount] == board[cur]){
        visited[cur] = true;
        checkCount++;
    }else{
        visited[cur] = false;
        checkCount--;
        return;
    }
    
    if(!cur/n){
        if(cur == 0){
            wordSearch(board, m, n, word, visited, checkCount, cur+1, prev, result);
            wordSearch(board, m, n, word, visited, checkCount, cur+n, prev, result);
        }else if(cur == n-1){
            wordSearch(board, m, n, word, visited, checkCount, cur-1, prev, result);
            wordSearch(board, m, n, word, visited, checkCount, cur+n, prev, result);
        }else{
            wordSearch(board, m, n, word, visited, checkCount, cur+1, prev, result);
            wordSearch(board, m, n, word, visited, checkCount, cur-1, prev, result);
            wordSearch(board, m, n, word, visited, checkCount, cur+n, prev, result);
        }
    }else if(cur/n == m - 1){
        if(cur == m*n - n){
            wordSearch(board, m, n, word, visited, checkCount, cur+1, prev, result);
            wordSearch(board, m, n, word, visited, checkCount, cur-n, prev, result);
        }else if(cur == m*n - 1){
            wordSearch(board, m, n, word, visited, checkCount, cur-1, prev, result);
            wordSearch(board, m, n, word, visited, checkCount, cur-n, prev, result);
        }else{
            wordSearch(board, m, n, word, visited, checkCount, cur+1, prev, result);
            wordSearch(board, m, n, word, visited, checkCount, cur-1, prev, result);
            wordSearch(board, m, n, word, visited, checkCount, cur-n, prev, result);
        }
    }else{
        if(!(cur % n)){
            wordSearch(board, m, n, word, visited, checkCount, cur+1, prev, result);
            wordSearch(board, m, n, word, visited, checkCount, cur-n, prev, result);
            wordSearch(board, m, n, word, visited, checkCount, cur+n, prev, result);
        }else if(!((cur + 1) % n)){
            wordSearch(board, m, n, word, visited, checkCount, cur-1, prev, result);
            wordSearch(board, m, n, word, visited, checkCount, cur-n, prev, result);
            wordSearch(board, m, n, word, visited, checkCount, cur+n, prev, result);
        }else{
            wordSearch(board, m, n, word, visited, checkCount, cur+1, prev, result);
            wordSearch(board, m, n, word, visited, checkCount, cur-1, prev, result);
            wordSearch(board, m, n, word, visited, checkCount, cur-n, prev, result);
            wordSearch(board, m, n, word, visited, checkCount, cur+n, prev, result);
        }
    }
}

int main(){
	int m, n;
	cin >> m >> n;
	
	int size = m*n;
	vector<char> board(size);
	
	for(int i = 0; i < size; i++) cin >> board[i];
	
	string word;
	cin >> word;
	
	int checkCount = 0;
	vector<bool> visited(size, false);
	
	bool result = false;
	wordSearch(board, m, n, word, visited, checkCount, 0, 0, result);
    
    cout << result;
}
