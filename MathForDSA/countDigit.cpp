#include<bits/stdc++.h>
using namespace std;

int evenlyDivides(int N){
        //code here
        int cnt = 0;
        int x = 0;
        int y = N;
        while(N){
            x = N%10;
            if(x != 0 && y%x == 0){
              cnt++;
            } 
            N = N/10;
        }
        return cnt;
    }

int main(){
    int ans = evenlyDivides(12);
    printf("%d\n", ans);
}