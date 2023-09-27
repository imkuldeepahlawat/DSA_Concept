/******************
 * 
 * 
 * 
 * class Solution {
public:
    // kanpsack concept
    int findTargetSumWays_helper(vector<int>nums,int s)
    {
        int n=nums.size();
        vector<vector<int>>dp(n+1,vector<int>(s+1,-1));
        for(int i=0;i<=n;i++) dp[i][0]=1;
        for(int j=1;j<=s;j++) dp[0][j]=0;

        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<=s;j++)
            {
                if(nums[i-1]<=j) dp[i][j]=dp[i-1][j] + dp[i-1][j-nums[i-1]];
                else dp[i][j]=dp[i-1][j];
            }
        }
        return dp[n][s];
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum=0;
        for(auto x:nums) sum+=x;
        if(sum < target || (target + sum)%2!=0) return 0;
        int s2=(target+sum)/2;
        if(s2<0) return 0;
        return findTargetSumWays_helper(nums,s2);
    }
};
*/