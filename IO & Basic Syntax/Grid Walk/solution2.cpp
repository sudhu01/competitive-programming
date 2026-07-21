#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int H, W;
    int S_i, S_j;

    cin >> H >> W >> S_i >> S_j;
    
    S_i = S_i - 1;
    S_j = S_j - 1;

    string X;
    
    int len = H*W;
    
    vector<char> matrix(len, '.');
    for(int i = 0; i < len; i++){
        cin >> matrix[i];
    }
    
    cin >> X;
    
    for(const char& c: X){
        switch(c){
            case 'L':
                if(S_j - 1 >= 0 && matrix[S_i * W + S_j - 1] == '.'){
                    S_j = S_j - 1;
                }
                break;
            case 'R':
                if(S_j + 1 < W && matrix[S_i * W + S_j + 1] == '.'){
                    S_j = S_j + 1;
                }
                break;
            case 'U':
                if(S_i - 1 >= 0 && matrix[(S_i- 1) * W + S_j] == '.'){
                    S_i = S_i - 1;
                }
                break;
            case 'D':
                if(S_i + 1 < H && matrix[(S_i + 1) * W + S_j] == '.'){
                    S_i = S_i + 1;
                }
                break;
            default:
                break;
        }
    }

    cout << S_i + 1 << " " << S_j + 1;

    return 0;
}