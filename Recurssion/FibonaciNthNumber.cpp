#include <bits/stdc++.h>
using namespace std;

int solve(int n){
    if(n==0) return 0;
    if(n==1) return 1;

    int  temp1 = solve(n-1);
    int  temp2 = solve(n-2);
    int ans = temp1+temp2;
    return ans;
}

int main(){

    int n = 10;
    // cin>>n;
    // recursively solve
    int rFact = solve(n);
    printf("Recurrsively Manner\n");
    printf("%d\n", rFact);

    
}