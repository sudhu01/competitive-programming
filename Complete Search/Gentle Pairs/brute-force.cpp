#include <bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<vector<int>> points(n, vector<int>(2, 0));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2; j++){
            cin >> points[i][j];
        }
    }

    int count = 0;
    int slope = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            slope = (points[j][1] - points[i][1])/(points[j][0] - points[i][0]);
            if(slope <= 1 && slope >= -1){
                count++;
            }
        }
    }

    cout << count;

    return 0;
}