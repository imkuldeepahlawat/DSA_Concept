/********
 * class Solution {
public:
    int solve(string &s1, string &s2,int n,int m){
        int  dp[n+1][m+1];
        for(int i= 0;i<=n;i++){
            for(int j = 0;j<=m;j++){
                if(i == 0) dp[i][j] = 0;
                if(j == 0) dp[i][j] = 0;
            }
        }

        for(int i= 1;i<=n;i++){
            for(int j = 1;j<=m;j++){
                if(s1[i-1] == s2[j-1]){
                    dp[i][j] = 1+ dp[i-1][j-1];
                }else{
                    dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
                }
                
            }
        }

        return dp[n][m];
    }
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size();
        int m = text2.size();
        
        return solve(text1,text2,n,m);
    }
};
*/