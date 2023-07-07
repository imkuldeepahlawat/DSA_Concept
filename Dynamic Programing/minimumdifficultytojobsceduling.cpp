/****
 * dp top down approch memorization
 * class Solution {
public:
    int memo[301][11];
    int solve(vector<int>&jd,int idx, int n,int d){

       // when the day is 1 so need to do all jobs so i can calculate the maximum and use  to optimse it

        if(d == 1){
            int maxD = jd[idx];

            for(int i = idx;i<n;i++){
                maxD = max(jd[i],maxD);
            }

            return maxD;
        }

        if(memo[idx][d] != -1) return memo[idx][d];



        int maxD = jd[idx];
        int finalResult = INT_MAX;
        for(int i = idx;i<=n-d;i++){
            maxD = max(jd[i],maxD);
            finalResult = min(finalResult,maxD + solve(jd,i+1,n,d-1));
        }

        return memo[idx][d] = finalResult;

    }
    int minDifficulty(vector<int>& jd, int d) {
        int n = jd.size();

        // when the case meet [9,9,9] days = 4

        if(n < d) return -1;

        // setting my memory array so i can use it later with new value insted of -1
        memset(memo,-1,sizeof(memo));

        return solve(jd,0,n,d);
    }
};
 *
*/