class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        set<vector<int>> trip;

        for (int i = 0; i < n - 2; i++) {
            int l = i + 1, r = n - 1;
            while (l < r) {
                if (nums[i] + nums[l]+ nums[r] < 0)
                    l++;
                else if (nums[i] + nums[l]+ nums[r] > 0)
                    r--;
                else
                    trip.insert({nums[i], nums[l++], nums[r--]});
            }
        }
        for (auto it : trip) {
            ans.push_back(it);
        }
        return ans;

        return ans;
    }
};
