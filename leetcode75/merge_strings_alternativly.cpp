class Solution {
public:
    string mergeAlternately(string word1, string word2) {

        string ans = "";
        int s1 = 0;
        int s2 = 0;

        while (s1 < word1.size() && s2 < word2.size()) {
            if (word1[s1] != ' ' && word2[s2] != ' ') {
                ans.push_back(word1[s1++]);
                ans.push_back(word2[s2++]);
                
            }else if(word1[s1] != ' ' && word2[s2] == ' ' ){
                ans.push_back(word1[s1++]);
                s2++;
            }else if(word1[s1] == ' ' && word2[s2] != ' ' ){
                ans.push_back(word2[s2++]);
                s1++;
            }
        }

        while(s1 < word1.size()){
            if(word1[s1] != ' ' ){
                ans.push_back(word1[s1++]);
                
            }else{
                s1++;
            }
        }
        while(s2 < word2.size()){
            if(word2[s2] != ' ' ){
                ans.push_back(word2[s2++]);
                
            }else{
                s2++;
            }
        }
        return ans;
    }
};
