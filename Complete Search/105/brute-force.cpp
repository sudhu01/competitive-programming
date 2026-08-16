#include <bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int total_count = 0;

    for(int i = 1; i <= n; i+=2){
        int count = 0;
        for(int j = 1; j <= n; j++){
            if(i % j == 0){
                count++;
            }
        }   
        if(count == 8){
            total_count++;
        }     
    }

    cout << total_count;

    return 0;
}