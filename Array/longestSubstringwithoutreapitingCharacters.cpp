/**********
 * 
 * 
 * class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length() == 1){
            return 1;
        }
        unordered_set<char>st;
       
        int ans = 0;

        int ld = -1;

        for(int i = 0;i<s.length();i++){

        if(st.find(s[i]) != st.end()){
            while(s[ld+1] != s[i]){
                st.erase(s[ld+1]);
                ld++;
            }
            ld++;

        }else{

           st.insert(s[i]);

        }

        ans = max(ans, (int)st.size());

    }

    return ans;
    }
};
*/


