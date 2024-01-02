class Solution {
public:
    
    bool isSubsequence(string s, string t) {
    if( s == t)return true;
    
    int i= 0;
    int j = 0;
    while(true){
        if(i >= s.size())return true;
        if(j >= t.size()) return false;
        if(s[i] == t[j]){
            i++;
            j++;
        }
        if(s[i] != t[j]){
            j++;
        }
    }
        return false;
    }
};