class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int ,int>mapping;
        vector<vector<int>>temp(nums.size()+1,vector<int>());

        for(auto it:nums){
            mapping[it]++;
        }

        for(auto it:mapping){
            temp[it.second].push_back(it.first);
        }

        vector<int>ans;

        for(int i =nums.size();i>=0;i--){
            for(auto it:temp[i]){
                if(ans.size() == k) break;

                ans.push_back(it);
            }
        }
        return ans;
    }
};