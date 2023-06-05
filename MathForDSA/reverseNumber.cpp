#include<bits/stdc++.h>
using namespace std;

int evenlyDivides(int N){
        //code here
        int ans = 0;
        while(N){
            int temp = N%10;
             ans = (ans*10)+temp;   
            N = N/10;
        }
        return ans;
    }

int main(){
    int ans = evenlyDivides(12);
    printf("%d\n", ans);
}