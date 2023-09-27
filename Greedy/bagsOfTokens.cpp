/****
 * 
 * class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int n = tokens.size();

        sort(tokens.begin(),tokens.end());

        int i = 0, j = n-1;
        int maxScore = 0;
        int score = 0;
        while(i<=j){

            if(power >= tokens[i]){
                power -= tokens[i];
                i++;
                score++;
                maxScore = max(maxScore,score);
            }else if(score >= 1){
                power += tokens[j];
                j--;
                score--;
                maxScore = max(maxScore,score);
            }else{
                return maxScore;
            }
        }

        return maxScore;
    }
};
*/