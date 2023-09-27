/**
 * bruteforce code
 * 
 * class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int n = nums.size();
        bool flag = false;
        for(int i = 0;i<n-1;i++){
            for(int j = i+1;j<n;j++){
                if(nums[i]+nums[j] == target){
                    ans.push_back(i);
                    ans.push_back(j);
                    flag = true;
                    break;
                }
                
            }
            if(flag){
                break;
            }
        }
        return ans;
    }
};
*/


/***
 * two pointer approch will not apply because answer will only according to originor positons
 * 
 * map
 * class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hash;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            int value = target- nums[i];
            if(hash.find(value) != hash.end()){
                    return {hash[value],i};
            }
            hash[nums[i]] = i;
            
        }      

        return {};
    }
};
 * 
 * 
 * 
 * 
*/