class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int ps = nums[0];
        for(int i = 1; i<nums.size(); i++){
            if(nums[i]==nums[i-1] + 1){
                ps += nums[i];
            }
            else{
                break;
            }
        }
        int missint = ps;
        while(contains(nums,missint)){
          missint++;
        }
        return missint;
    }
    bool contains(vector<int> nums, int value){
        for(int num:nums){
           if(num == value){
              return true;
           }
     
      }
        return false;
    }
};