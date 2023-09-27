/****
 * 
 * brute forcce 
 * 
 * if(nums.size() == 0 ){
            return 0;
        }
        
        sort(nums.begin(),nums.end());
        
        int ans = 1;
        int prev = nums[0];
        int cur = 1;
        
        for(int i = 1;i < nums.size();i++){
            if(nums[i] == prev+1){
                cur++;
            }
            else if(nums[i] != prev){
                cur = 1;
            }
            prev = nums[i];
            ans = max(ans, cur);
        }
        return ans;
*/



/*****
 * optimal
 * 
 * 
 * 
 * class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        set<int >hashset;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            hashset.insert(nums[i]);
        }

        int ans = 0;
        

        for(auto num : nums){
            if(!hashset.count(num-1)){
                int currnum = num;
                int currans = 1;
                while(hashset.count(currnum+1)){
                    currnum +=1;
                    currans+=1;
                }
                ans = max(currans,ans);
            }

            
        }
        return ans;
    }
};
*/