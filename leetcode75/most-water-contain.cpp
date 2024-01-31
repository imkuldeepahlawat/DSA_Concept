class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int l = 0, r = n - 1;
        int maxi = INT_MIN;
        
        while (l < r) {
            
                maxi = max(maxi, min(height[l],height[r])*(r-l));
            if (height[l] < height[r]) {
            
                l++;
            } else{
                 
                r--;
            }
        }
        return maxi;
    }
};
