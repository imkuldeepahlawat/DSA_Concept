/***
 * optimal approch
 * 
 * class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int l = 0, r = n-1;
        int maxleft = 0,maxright = 0;
        int ans = 0;
        while(l<=r) {

            if(height[l] <= height[r]){

                if(height[l] >= maxleft) maxleft = height[l];
                else ans += maxleft-height[l];

                l++;
            }else{
                if(height[r]  >= maxright) maxright = height[r];
                else ans += maxright - height[r];

                r--;
            }
        }
        return ans;
    }
};
*/


/***
 * bruteforce 1
 * int trap(vector < int > & arr) {
  int n = arr.size();
  int waterTrapped = 0;
  for (int i = 0; i < n; i++) {
    int j = i;
    int leftMax = 0, rightMax = 0;
    while (j >= 0) {
      leftMax = max(leftMax, arr[j]);
      j--;
    }
    j = i;
    while (j < n) {
      rightMax = max(rightMax, arr[j]);
      j++;
    }
    waterTrapped += min(leftMax, rightMax) - arr[i];
  }
  return waterTrapped;
}
*/
/*********
 * bruteforce 2
 * int trap(vector < int > & arr) {
  int n = arr.size();
  int prefix[n], suffix[n];
  prefix[0] = arr[0];
  for (int i = 1; i < n; i++) {
    prefix[i] = max(prefix[i - 1], arr[i]);
  }
  suffix[n - 1] = arr[n - 1];
  for (int i = n - 2; i >= 0; i--) {
    suffix[i] = max(suffix[i + 1], arr[i]);
  }
  int waterTrapped = 0;
  for (int i = 0; i < n; i++) {
    waterTrapped += min(prefix[i], suffix[i]) - arr[i];
  }
  return waterTrapped;
}
*/