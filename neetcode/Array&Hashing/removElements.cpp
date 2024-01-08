class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> temp;
        int cnt = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                temp.push_back(nums[i]);
                cnt++;
            }
        }
        nums = temp;

        return cnt;
    }
};