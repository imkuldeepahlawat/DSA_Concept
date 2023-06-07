#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
        int ans =INT_MIN;
        int sum = 0;
        for(int i =0;i<nums.size();i++){
            sum +=nums[i];
            ans = max(sum,ans); 
            if(sum <0){
                sum = 0;
            }
        }
        return ans;
    }

int main()
{
    int N = 5, K = 6;
    vector<int> arr = {1, 2, 3, 4, 6};
    int ans = maxSubArray(arr);
    // printf("%d\n", ans);
}