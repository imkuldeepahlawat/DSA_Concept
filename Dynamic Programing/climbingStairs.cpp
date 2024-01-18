class Solution {
public:
    int climbStairs(int n) {
        if(n == 1 || n== 0 ) return n;

        vector<int>mapi(n+1,-1);
        mapi[0] = 1;
        mapi[1] = 1;
        for(int i = 2 ;i<=n;i++){
            mapi[i] = mapi[i-1]+mapi[i-2];
        }
        return mapi[n];
    }
};