/******
 * 
 * class Solution {
public:
    string sortVowels(string s) {
        vector<char>t;
        
        for(auto it : s){
            if( it == 'a'|| it == 'e' || it == 'i' || it == 'o' || it == 'u' || it =='A' || it == 'E' || it == 'I' || it == 'O' || it == 'U'){
                t.push_back(it);
            }
        }
        sort(t.begin(),t.end());
        reverse(t.begin(),t.end());
        for(auto &it : s){
            if( it == 'a'|| it == 'e' || it == 'i' || it == 'o' || it == 'u' || it =='A' || it == 'E' || it == 'I' || it == 'O' || it == 'U'){
                it = t.back();
                t.pop_back();
            }
        }
        
        return s;
    }
};
*/