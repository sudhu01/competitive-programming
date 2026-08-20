#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<vector<int>> ch(n, vector<int>(3));

    for(int i = 0; i < n; i++){
        cin >> ch[i][0] >> ch[i][1] >> ch[i][2];
    }

    int checkCount;
    int H = 0;
    int prevH;

    for(int i = 0; i <= 100; i++){
        for(int j = 0; j <= 100; j++){
            checkCount = 0;
            for(int p = 0; p < n; p++){
                prevH = H;
                if(ch[p][2]){
                    H = ch[p][2] + abs(ch[p][0] - i) + abs(ch[p][1] - j);
                }
                if(p > 0 && prevH == H){
                    checkCount++;
                }
            }
            if(checkCount >= n - 1){
                cout << i << ' ' << j << ' ' << H;
                break;
            }
        }
    }

    return 0;
}