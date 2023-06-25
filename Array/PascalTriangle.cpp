/**
 * class Solution {
public:
    vector<int> genrateRow(int n){
        long long res = 1;
        vector<int> ans;
        ans.push_back(res);

        for(int i = 1;i<n;i++){
            res = res*(n-i);
            res = res/(i);
            ans.push_back(res);
        }
        return ans;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;

        for(int i = 1;i<=numRows;i++){
            ans.push_back(genrateRow(i));
        }
        return ans;
        
    }
};
*/