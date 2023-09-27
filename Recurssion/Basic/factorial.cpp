#include <bits/stdc++.h>
using namespace std;

int solve(int n){
    if(n==0) return 1;

    int  temp = solve(n-1);
    int ans = temp * n;
    return ans;
}

int main(){

    int n = 5;
    // cin>>n;
    // recursively solve
    int rFact = solve(n);
    printf("Recurrsively Manner\n");
    printf("%d\n", rFact);

    
}