/****
 * class Solution {
public:
    unordered_set<string>st;
    int n;
    int cache[301];
    bool solve(int idx, string &s){
        if(idx >= n) return cache[idx] = true;
        if(cache[idx] != -1) return cache[idx];
        if(st.find(s) != st.end()) return true;
        for(int l = 1;l<=n;l++){
            string temp = s.substr(idx,l);
            if((st.find(temp) != st.end()) && solve(idx+l,s)){
                return cache[idx] = true;
            }
        }
        return cache[idx] = false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        n = s.length();
        for(auto str:wordDict){
            st.insert(str);
        }
        memset(cache,-1,sizeof(cache));

        return solve(0,s);
    }
};
*/