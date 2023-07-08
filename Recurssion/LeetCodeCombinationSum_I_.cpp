/***********
 * my solution-- using reccursion and backtracking
 * ---------------------------------------------------
 * class Solution {
public:
    void solve(vector<int>&arr,int n,vector<vector<int>> &ans,vector<int>&temp,int it,int target,int sum){
        if(sum == target){
            ans.push_back(temp);
        }

        if(sum < target){
            for(int i = it;i<n;i++){
                temp.push_back(arr[i]);
                solve(arr,n,ans,temp,i,target,sum+arr[i]);
                temp.pop_back();
            }
            return;
        }else{
            return;
        }


    }
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        int n = arr.size();
        solve(arr,n,ans,temp,0,target,0);
        return ans;        
    }
};
*/


/***
 * striver solution
 * ---------------------------------------
 * class Solution {
public:
    void solve(vector<int>&arr,int n,vector<vector<int>> &ans,vector<int>&temp,int it,int target){
        if(it == n){
            if(target == 0){
                ans.push_back(temp);
            }
            return;
        }

        if(arr[it] <= target){
            temp.push_back(arr[it]);
            solve(arr,n,ans,temp,it,target-arr[it]);
            temp.pop_back();
        }

        
        solve(arr,n,ans,temp,it+1,target);
                


    }
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        int n = arr.size();
        solve(arr,n,ans,temp,0,target);
        return ans;        
    }
};
*/