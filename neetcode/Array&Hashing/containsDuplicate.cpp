class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> presentDigit;
        for(int i = 0;i<nums.size();i++){
            if(presentDigit.find(nums[i]) != presentDigit.end()){
                return true;
            }else{
                presentDigit.insert(nums[i]);
            }
        }
        return false;
    }
};