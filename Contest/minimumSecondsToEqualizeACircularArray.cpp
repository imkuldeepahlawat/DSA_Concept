/****
 * class Solution {
public:
    int minimumSeconds(vector<int>& nums) {
        int n = nums.size();//size of orizinal array
        unordered_map<int,int>last;//index maping for duplicates

        for(int i = 0;i<n;i++){
            nums.push_back(nums[i]);
            last[nums[i]] = -1;
        }
        n = nums.size();//new array size with duplicates
        map<int,int>max_time;
        for(int i = 0;i<n;++i){
            // after half array code flow will come here only if no duplicates, if duplicates then bich me kabhi bhi aa sakta hai
            if(last[nums[i]] != -1){
                int tot_time = (i-last[nums[i]]);
                tot_time /=2;
                max_time[nums[i]] = max(max_time[nums[i]],tot_time);
            }
            // every itration will first come here
            last[nums[i]] = i;
        }

        // now calculate minimum from all maximum seconds
        int ans = INT_MAX;
        for(auto x:max_time) ans = min(ans,x.second);

        return ans;
    }
};
*/