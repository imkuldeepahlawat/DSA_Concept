/************
 * kadans algorithms new version
 * 
 * class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans = INT_MIN;
        int leftProd = 1;
        int rightProd = 1;
        int n = nums.size();

        for(int i = 0;i<n;i++){
            leftProd = leftProd == 0 ? 1 : leftProd;
            rightProd = rightProd == 0 ? 1 : rightProd;

            leftProd *= nums[i];
            rightProd *= nums[n-i-1];

            ans = max(ans,max(leftProd,rightProd));
        }

        return ans;
    }
};
*/