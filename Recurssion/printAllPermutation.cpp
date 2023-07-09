/******
 * class Solution {
public:
    void solve(vector<int>& nums,vector<vector<int>>&ans,int n,int i){
        if(i == n){
            ans.push_back(nums);
            return;
        }

        for( int j = i;j<n;j++){
            swap(nums[i],nums[j]);
            solve(nums,ans,n,i+1);
            swap(nums[i],nums[j]);
        }
        
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        
        solve(nums,ans,n,0);
        

        return ans;
    }
};
*/