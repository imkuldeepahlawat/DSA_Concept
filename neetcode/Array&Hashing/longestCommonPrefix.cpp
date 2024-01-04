class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0)
            return "";
        string one1st = strs[0];
        string ans = "";
        int inx = 0;
        for (int i = 0; i < strs[0].size(); i++) {
            bool flag = false;
            for (int j = 0; j < strs.size(); j++) {
                if(strs[0][i] == strs[j][i]){
                    flag = true;
                }else{
                    flag = false;
                    break;
                }
            }
            if(flag){
                ans.push_back(strs[0][i]);
            }else{
                return ans;
            }
        }
        return ans;
    }
};
// ====================================>
class Solution {
public:
    string longestCommonPrefix(vector<string>& v) {
        string ans="";
        sort(v.begin(),v.end());
        int n=v.size();
        string first=v[0],last=v[n-1];
        for(int i=0;i<min(first.size(),last.size());i++){
            if(first[i]!=last[i]){
                return ans;
            }
            ans+=first[i];
        }
        return ans;
    }
};