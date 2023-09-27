/***
 * using dp  top down approch
 * class Solution {
public:
    int cache[101];
    int solve(vector<int>& nums,int n,int i){
        if(i >= n) return 0;
        // using memory
        if(cache[i] != -1) return cache[i];

        // if stole
        int stole = nums[i] + solve(nums,n,i+2);
        // if not stole||skip
        int skip = solve(nums,n,i+1);


        return cache[i] = max(stole,skip);

    }
    int rob(vector<int>& nums) {
        memset(cache,-1,sizeof(cache));
        return solve(nums,nums.size(),0);
    }
};
*/

/***
 * using bottom up approch
 * class Solution {
public:
    int rob(vector<int>& nums) {
        // if the size is only one
        int n = nums.size();
        if(n == 1) return nums[0];

        vector<int> cache(n+1,0);
        // cause indexing of cache sarting from 1 to handle 0 case
        cache[1] = nums[0];


        for(int i = 2;i<=n;i++){
            int stole = nums[i-1] + cache[i-2];
            int skip = cache[i-1];

            cache[i] = max(stole,skip);
        }

        return cache[n];
        
    }
};
*/