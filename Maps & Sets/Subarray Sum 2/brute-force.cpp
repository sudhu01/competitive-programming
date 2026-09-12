#include <bits/stdc++.h>
using namespace std;


int main(){
    
    int n, x;
    cin >> n >> x;
    
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    long count = 0; 
    
    int i = 0, j = 1;
    while(i < n){
        if(accumulate(arr.begin() + i, arr.begin() + j, 0) == x){
            count++;
        }
        j += 1;
        if(j == n+1){
            i++;
            j = i+1;
        }
    }
    
    cout << count;
    
    
    return 0;
}