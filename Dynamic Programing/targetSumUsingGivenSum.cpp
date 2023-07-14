#include <bits/stdc++.h>
using namespace std;
// long long int dp[55][255];
// long long solve(int target,int n ,vector<int>&coins){
//     // whne no amout is given 
//     if(target == 0) return 1;
//     //  when amount is given but coins is not given
//     if( n == 0) return 0;
//     if(dp[n][target] != -1) return dp[n][target];


//     if(coins[n-1] <= target){
//         return dp[n][target] = solve(target-coins[n-1],n,coins)+solve(target,n-1,coins);
//     }else{
//         return dp[n][target] = solve(target,n-1,coins);
//     }


// }
long long solve2(int target,int n ,vector<int>&coins){
    
    long long int dp[55][255];

    for(int i = 0;i<=target;i++){
        dp[0][i] = 0;
    }
    for(int i = 0;i<=n;i++){
        dp[i][0] = 1;
    }

    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=target;j++){

            if(coins[i-1] <= j){
                dp[i][j] = dp[i][j-coins[i-1]]+dp[i-1][j];
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][target];
}
long long coinChange(int amount, int n, vector<int>&coins){
    // for recursion use only
    // memset(dp,-1,sizeof(dp));
    // return solve(amount,n,coins);
    return solve2(amount,n,coins);
}

int main(){
    int A,N;
    cin>>A>>N;
    vector<int>coins(N);
    for (int i=0;i<N;i++){
        cin>>coins[i];
    }
    cout<<coinChange(A,N,coins)<<"\n";
}