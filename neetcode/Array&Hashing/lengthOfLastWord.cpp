class Solution {
public:
    vector<string> split(string str, char del) {

        string temp = "";
        vector<string> ans;

        for (int i = 0; i < (int)str.size(); i++) {

            if (str[i] != del) {
                temp += str[i];
            } else {
                if (temp != "") {
                    ans.push_back(temp);
                    temp = "";
                }
            }
        }
        if (temp != "") {
            ans.push_back(temp);
            temp = "";
        }
        return ans;
    }
    int lengthOfLastWord(string s) {
        vector<string> ans = split(s, ' ');
        return ans[ans.size() - 1].size();
    }
};