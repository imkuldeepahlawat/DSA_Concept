//LIC
// class Solution {
// public:
//     int dp[2501][2502];
//     int solve(int n,vector<int>& nums,int curr,int prev){
//         // base case
//         if(curr  == n) return 0;

//         if(dp[curr][prev+1] != -1) return dp[curr][prev+1];
//         // take
//         int take = 0;
//         if(prev == -1 || nums[curr]  > nums[prev]){
//             take = 1+ solve(n,nums,curr+1,curr);
//         }
//         // not take
//         int notTake = 0 + solve(n,nums,curr+1,prev);
//         return dp[curr][prev+1] = max(take,notTake);
//     }
//     int lengthOfLIS(vector<int>& nums) {
//         int n = nums.size();
//         memset(dp,-1,sizeof(dp));
//         int ans = solve(n,nums,0,-1);
//         return ans;
//     }
// };
// DP WITH BINARY SEARCH----------------------------------------------------------------
// int solveOpt(vector<int>& arr){
//         int n = arr.size();

//         if(n == 0)return 0;

//         vector<int> ans;

//         ans.push_back(arr[0]);
//         for(int i = 1;i<n;i++){
//             if(arr[i] > ans.back()){
//                 ans.push_back(arr[i]);
//             }else{
//                 int inx = lower_bound(ans.begin(),ans.end(),arr[i])-ans.begin();
//                 ans[inx] = arr[i];
//             }
//         }
//         return ans.size();
//     }