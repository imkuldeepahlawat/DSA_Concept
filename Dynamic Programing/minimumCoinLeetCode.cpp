/**************
 * 
 * class Solution {
public:
    
    int dp[13][10001];
    int solve(vector<int>& arr, int w,int n){
        for(int i = 0;i<=n;i++){
            dp[i][0] = 0;
        }
        for(int j = 0;j<=w;j++){
            dp[0][j] = INT_MAX-1;
        }


        for(int i = 1;i<=n;i++){
            for(int j = 1;j<=w;j++){
                if(arr[i-1] <= j){
                    dp[i][j] = min(dp[i][j-arr[i-1]]+1,dp[i-1][j]);
                }else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }

        if(dp[n][w] >= INT_MAX-1) return -1;

        return dp[n][w];
    }
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        
        int ans = solve(coins,amount,n);
        
        
        return ans;
    }
};
*/