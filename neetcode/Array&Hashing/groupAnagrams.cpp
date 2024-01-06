class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mapping;
        vector<vector<string>> ans;

        for(auto x:strs){
            string tempStr = x;
            sort(tempStr.begin(),tempStr.end());
            mapping[tempStr].push_back(x);
        }
        for(auto str:mapping){
            ans.push_back(str.second);
        }

        return ans;
    }
};