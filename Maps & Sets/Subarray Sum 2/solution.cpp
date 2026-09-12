#include <bits/stdc++.h>
using namespace std;


int main(){
    
    int n, x;
    cin >> n >> x;
    
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    long long count = 0;
    long long prefixSum = 0;
    
    unordered_map<long long, long long> freq;
    
    freq[0] = 1;
    
    for(int i = 0; i < n; i++){
        prefixSum += arr[i];
        count += freq[prefixSum - x];
        freq[prefixSum]++;
    }
    
    cout << count;
    
    return 0;
}