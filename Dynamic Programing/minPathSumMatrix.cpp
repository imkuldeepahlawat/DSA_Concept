/************
 * 
 * 
 * 
 * class Solution {
public:
    int dp[201][201];
    int solve(vector<vector<int>>& grid,int n , int m ,int i ,int j){
        if(i == n-1 && j == m-1) return grid[i][j];

        if(dp[i][j] != -1) return dp[i][j];

        if(i == n-1){
            return dp[i][j] = grid[i][j] + solve(grid,n,m,i,j+1);
        }else if( j == m-1){
            return dp[i][j] = grid[i][j] + solve(grid,n,m,i+1,j);
        }else{
            return dp[i][j] = grid[i][j] + min(solve(grid,n,m,i,j+1),solve(grid,n,m,i+1,j));
        }
    }
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        memset(dp,-1,sizeof(dp));
        int ans = solve(grid,n,m,0,0);
        return ans;
    }
};
*/