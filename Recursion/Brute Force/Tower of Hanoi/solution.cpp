#include <bits/stdc++.h>
using namespace std;


void towerOfHanoi(int n, char start, char destination, char aux, int& count){
    
    if(n == 1){
        count++;
        cout << start << " " << destination << "\n"; 
        return;
    }
    
    
    towerOfHanoi(n - 1, start, aux, destination, count);
    
    count++;
    cout << start << " " << destination << "\n";
    
    towerOfHanoi(n - 1, aux, destination, start, count);
}

int main(){
    int n, count = 0;
    cin >> n;
    towerOfHanoi(n, '1', '3', '2', count);
    cout << count;
}