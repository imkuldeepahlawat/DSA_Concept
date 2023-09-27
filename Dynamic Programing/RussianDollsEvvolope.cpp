/*
class Solution {
public:
    int solveOpt(vector<int>& arr){
        int n = arr.size();

        if(n == 0)return 0;

        vector<int> ans;

        ans.push_back(arr[0]);
        for(int i = 1;i<n;i++){
            if(arr[i] > ans.back()){
                ans.push_back(arr[i]);
            }else{
                int inx = lower_bound(ans.begin(),ans.end(),arr[i])-ans.begin();
                ans[inx] = arr[i];
            }
        }
        return ans.size();
    }
    static bool cmp(vector<int>a,vector<int>b){
        if(a[0] == b[0]){
            return a[1] > b[1];
        }else{
            return a[0] < b[0];
        }

        return true;
    }
    int lengthOfLIS(vector<int>& nums) {
        int ans = solveOpt(nums);
        return ans;
    }
    int maxEnvelopes(vector<vector<int>>& arr) {
        sort(arr.begin(),arr.end(),cmp);
        vector<int>nums;
        for(int i = 0;i<arr.size();i++){
            nums.push_back(arr[i][1]);
        }
        int ans = lengthOfLIS(nums);
        return ans;
    }
};
*/