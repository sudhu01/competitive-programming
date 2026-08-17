#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a,b,c,x,y;
    cin >> a >> b >> c >> x >> y;

    int m = (a+b <= 2*c) ? 0 : 1;

    int minSum = 0;

    if(m){
        int lesserValue = min(x, y);
        int remaining = max(x, y) - lesserValue;
        while(lesserValue){
            minSum += 2*c;
            lesserValue--;
        }
        
        while(x < y && remaining && b < 2*c){
            minSum += b;
            remaining--;
        }
        while(x > y && remaining && a < 2*c){
            minSum += a;
            remaining--;
        }
        while(remaining){
            minSum += 2*c;
            remaining--;
        }
    }
    else{
        minSum = x*a + y*b;
    }
    
    cout << minSum;

    return 0;
}