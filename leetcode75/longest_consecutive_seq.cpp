class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0 )return n;
        sort(nums.begin(),nums.end());
        int mxLen = 1;
        int curLen = 1;

        for(int i = 1;i<n;++i){
            if(nums[i] != nums[i-1]){
                if(nums[i] == nums[i-1]+1){
                    ++curLen;
            }else{
                curLen =1;
            }
            mxLen = max(mxLen,curLen);
            }
        }
        return mxLen;
        
    }
};
