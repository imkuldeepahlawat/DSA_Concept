//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

    bool check(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        for(int i = 1;i<n;i++){
            if(nums[i-1]>nums[i]){
                count++;
            }
        }
        if(nums[n-1]>nums[0]){
            count++;
        }
        return count<=1;
    }
//{ Driver Code Starts.
int main()
{
    vector<int>arr{3,4,5,1,2};
    int n = check(arr);

        if(n){
            printf("The arrai is sorted rotated\n");
        }else{
            printf("The arrai is sorted rotated\n");
        }
}
// } Driver Code Ends