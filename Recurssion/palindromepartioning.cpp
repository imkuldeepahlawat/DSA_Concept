/********
 * 
 * class Solution {
public:
    int n;
    bool palindrome(string &s ,int l ,int r){
        while(l<r){
            if(s[l] != s[r]){
                return false;
            }
            l++;
            r--;
        }

        return true;
    }
    void solve(string &s,vector<vector<string>>&ans,vector<string>&temp,int it){
        if(it == n){
            ans.push_back(temp);
            return;
        }


        for(int i = it;i<n;i++){
            if(palindrome(s,it,i)){
                temp.push_back(s.substr(it,i-it+1));
                solve(s,ans,temp,i+1);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        n = s.length();
        vector<vector<string>> ans;
        vector<string> temp;
        solve(s,ans,temp,0);
        return ans;
    }
};

*/