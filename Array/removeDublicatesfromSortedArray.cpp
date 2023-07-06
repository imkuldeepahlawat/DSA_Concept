/****
 * bruteforce approch
 * class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return n;
        set<int>uni;
        for(int i = 0;i<n;i++){
            uni.insert(nums[i]);
        }
        if(n == uni.size()) return n;
        nums.clear();
        for(auto it:uni){
            nums.push_back(it);
        }

        return uni.size();
    }
};
*/


/*****
 * optimal approch
 * 
*/