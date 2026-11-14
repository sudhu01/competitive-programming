#include <bits/stdc++.h>
using namespace std;


int getPos(string s){
    int s_pos = 0;
    for(char c: s){
        switch(c){
            case '+':
                s_pos++;
                break;
            case '-':
                s_pos--;
                break;
            default:
                break;
        }
    }
    
    return s_pos;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s1, s2;
    
    cin >> s1 >> s2;
    
    int total_combinations = 1;
    
    int unrecognized = 0;
    for(char c: s2){
        if(c == '?'){
            total_combinations *= 2;
            unrecognized++;
        } 
    }
    
    int s1_pos = getPos(s1);
    float correct = 0;
    int s2_pos, ind;
    string new_s2;
    
    if(unrecognized){
        for(int x = 0; x < total_combinations; x++){
            string comb;
            for(int i = 0; i < unrecognized; i++){
                if(x & (1 << i)){
                    comb += '+';
                }else{
                    comb += '-';
                }
            }
            
            new_s2 = "";
            ind = 0;
            for(char c: s2){
                if(c == '?'){
                    new_s2 += comb[ind++];
                }else{
                    new_s2 += c;
                }
            }
            s2_pos = getPos(new_s2);
            if(s1_pos == s2_pos){
                correct ++;
            }
        }
    }else{
        s2_pos = getPos(s2);
        if(s1_pos == s2_pos){
            correct ++;
        }
    }
    cout << correct/total_combinations;
}