#include <bits/stdc++.h>
using namespace std;
int dp[101][1000001];
int solve(int target,int n ,vector<int>&coins){
    if(target <= 0) return 0;
    if( n <= 0){
        if(target%coins[0] == 0) return target/coins[0];
        else{

         return INT_MAX-1;
        }
    }
    

    if(dp[n][target] != -1) return dp[n][target];


    if(coins[n] <= target){
        
        return dp[n][target] = min(solve(target-coins[n],n,coins)+1,solve(target,n-1,coins));
    }else{
        return dp[n][target] = solve(target,n-1,coins);
    }
}
// int solve2(int target,int n ,vector<int>&coins){
    
//     int dp[n+1][target+1];
//     memset(dp,-1,sizeof(dp));
//     for(int i = 0;i<=target;i++){
//         dp[0][i] = INT_MAX-1;
//     }
//     for(int i = 1;i<=n;i++){
//         dp[i][0] = 0;
//     }
//     for(int j = 1;j<=target;j++){
//         if(j%coins[0] == 0){
//             dp[1][j] = j/coins[0];
//         }else{
//             dp[1][j] = INT_MAX-1;
//         }
//     }

//     for(int i = 2;i<=n;i++){
//         for(int j = 1;j<=target;j++){

//             if(coins[i-1] <= j){
//                 dp[i][j] = min(dp[i][j-coins[i-1]]+1,dp[i-1][j]);
//             }else{
//                 dp[i][j] = dp[i-1][j];
//             }
//         }
//     }
//     if(dp[n][target] == INT_MAX){
//         return -1;
//     }
//     return dp[n][target];
// }
int minCoins(vector<int>& coins, int S){ 
    memset(dp,-1,sizeof(dp));
    int ans = solve(S,coins.size()-1,coins);
    if(ans == INT_MAX-1) return -1;
    return ans;
}


int main(){
    int n,amount;
    cin>>n>>amount;
    vector<int>coins(n);
    for(int i=0;i<n;i++){
        cin>>coins[i];
    }
    cout<<minCoins(coins,amount)<<"\n";
    return 0;
}