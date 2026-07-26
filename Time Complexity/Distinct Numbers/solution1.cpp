#include <bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> nums(n, 0);
    int max = numeric_limits<int>::min();

    for(int i = 0; i < n; i++){
        cin >> nums[i];
        if(nums[i] > max){
            max = nums[i];
        }
    }

    int size = max + 1;
    vector<int> hash(size, 0);
    int distinct = 0;

    for(int i = 0; i < n; i++){
        hash[nums[i]] += 1;
    }

    for(int i = 0; i < size; i++){
        if(hash[i] >= 1){
            distinct += 1;
        }
    }

    cout << distinct;
}