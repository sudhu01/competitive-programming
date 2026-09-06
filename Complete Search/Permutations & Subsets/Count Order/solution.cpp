#include <bits/stdc++.h>
using namespace std;


int main(){
    
    int n;
    cin >> n;
    
    vector<int> p1(n), p2(n);
    
    for(int i = 0; i < n; i++){
        cin >> p1[i];
    }
    
        for(int i = 0; i < n; i++){
        cin >> p2[i];
    }
    
    
    int count = 0;
    int pos1 = -1;
    int pos2 = -1;
    
    vector<int> p(n);
    for(int i = 1; i <= n; i++){
        p[i-1] = i;
    }
    
    vector<int> hash1(n, 0);
    vector<int> hash2(n, 0);
    bool check1, check2;
    
    do{
        count += 1;
        check1 = true;
        check2 = true;
        for(int i = 0; i < n; i++){
            if(p[i] == p1[i]) hash1[i]++;
        }
        
        for(int i = 0; i < n; i++){
            if(!hash1[i]){
                check1 = false;
                break;
            };
        }
        
        if(check1){
            pos1 = count;
        }
        
        for(int i = 0; i < n; i++){
            if(p[i] == p2[i]) hash2[i]++;
        }
        
        for(int i = 0; i < n; i++){
            if(!hash2[i]){
                check2 = false;
                break;
            };
        }
        
        if(check2){
            pos2 = count;
        }
        
        if(pos1 != -1 && pos2 != -1){
            cout << abs(pos1 - pos2);
            break;
        }
        
        hash1.assign(n, 0);
        hash2.assign(n, 0);
    }while(next_permutation(p.begin(), p.end()));
    
    
    
    return 0;
}