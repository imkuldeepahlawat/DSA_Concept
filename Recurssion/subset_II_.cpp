/***
 * firstnive approch bro not work cause i have not didi the backtrack
 * class Solution {
public:
    void solve(vector<vector<int>>&ans,int n,vector<int>& nums,vector<int>& temp,int i){
        if(i == n){
            ans.push_back(temp);
            if(!temp.empty())
                temp.pop_back();
            return;
        }
        // not pick
        solve(ans,n,nums,temp,i+1);
        // pick the element
        temp.push_back(nums[i]);
        solve(ans,n,nums,temp,i+1);
        return;

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        
        vector<int> temp;
        solve(ans,n,nums,temp,0);
        return ans;
    }
};
*/

/************
 * using back tracking
 *class Solution {
public:
    void solve(vector<vector<int>>&ans,int n,vector<int>& nums,vector<int>& temp,int i){
        ans.push_back(temp);
        

        for(int it = i;it<n;it++){
            if(it != i && nums[it] == nums[it-1]) continue;
            // inserting element
            temp.push_back(nums[it]);
            solve(ans,n,nums,temp,it+1);
            temp.pop_back();
        }
        return;

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        
        vector<int> temp;
        sort(nums.begin(),nums.end());
        solve(ans,n,nums,temp,0);
        return ans;
    }
};
*/