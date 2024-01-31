class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";

        for(auto it:s){
            if(iswalnum(it)){
                str.push_back(tolower(it));
            }
        }
        int l = 0;
        int r = str.size()-1;
        if(str == "") return true;

        while(l<r){
            if(str[l++] != str[r--]){
                return false;
            }
            
        }
        return true;
    }
};
