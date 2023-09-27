#include <bits/stdc++.h>
using namespace std;

int solve(int n){
    if(n==0) return 0;

    int  tempSum = solve(n-1);
    int ans = tempSum + n;
    return ans;
}

int main(){

    int n = 10;
    // cin>>n;
    // recursively solve
    int rSum = solve(n);
    printf("Recurrsively Manner\n");
    printf("%d\n", rSum);

    // brute force manner
    int bfsum = 0;
    for(int i = 0; i <=n; i++){
        bfsum += i;
    }
    printf("Brute Force manner\n");
    printf("%d\n", bfsum);
}