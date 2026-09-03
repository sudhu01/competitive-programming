#include <bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    string num;
    cin >> num;

    vector<string> check;
    string s1;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            for(int k = j + 1; k < n; k++){
                s1 = "";
                s1 += num[i];
                s1 += num[j];
                s1 += num[k];
                auto it = find(check.begin(), check.end(), s1);
                
                if(it == check.end()){
                    check.push_back(s1);
                    
                }
            }
        }
    }

    cout << check.size();

    return 0;
}