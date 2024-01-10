class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>ST;
        unordered_map<char,char>TS;

        for(int i = 0;i<s.size();i++){
            if(ST.find(s[i]) != ST.end() && ST[s[i]] != t[i]){
                return false;
            }
            if(TS.find(t[i]) != TS.end() && TS[t[i]] != s[i]){
                return false;
            }
                ST[s[i]] = t[i];
                TS[t[i]] = s[i];
        }


        return true;
    }
};