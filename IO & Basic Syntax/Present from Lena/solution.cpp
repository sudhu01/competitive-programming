#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    cout << 0 << "\n";
    
    int rows = n*2;
    vector<int> peaks(rows, -1);
    for(int i = 0; i < rows; i++){
        peaks[i] = min(i+1, rows - i - 1);
    }
    
    int middle = n-1;
    vector<int> spaces(rows, -1);
    for(int i = 0; i < rows; i++){
        spaces[i] = abs(i- middle)*2;
    }

    for(int i = 0; i < rows; i++){
        string repeated_spaces(spaces[i], ' ');
        cout << repeated_spaces;
        int peak = peaks[i];
        for(int j = 0; j < peak; j++){
            cout << j << ' ';
        }
        for(int j = peak; j >= 0; j--){
            cout << j << ' ';
        }
        cout << repeated_spaces << "\n";
    }

    return 0;
    
}