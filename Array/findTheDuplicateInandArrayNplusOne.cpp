/**
 * You must solve the problem without modifying the array nums and uses only constant extra space.
 * solution run but need to improve
 * class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        set<int>tset;

        for(int i = 0;i<nums.size();i++){
            if(tset.find(nums[i]) == tset.end() ){
                tset.insert(nums[i]);
            }else{
                return nums[i];
            }
        }
        return -1;
    }
};
*/
/**
 * using slow and fast pointers
 * class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];

        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while(slow != fast);

        fast = nums[0];

        while(slow != fast ){

            slow = nums[slow];
            fast = nums[fast];
        }

        return fast;
    }
};
*/