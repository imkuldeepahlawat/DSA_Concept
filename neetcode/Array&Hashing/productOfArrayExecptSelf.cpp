// TLE
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        for (int i = 0;i<n;i++){
            int  num = 1;
            for(int j = 0;j<n;j++){
                if(i != j){
                    num *= nums[j];
                }
            }
            ans.push_back(num);
        }
        return ans;
    }
};