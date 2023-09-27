/*****************
 * using recursion and backtracking
 * 
    class Solution {
public:
    void solve(vector<int>&arr,int n,vector<vector<int>> &ans,vector<int>&temp,int it,int target,int sum){
        
        
        if(sum == target){
            ans.push_back(temp);
        }
        
        

        if(sum < target){
            for(int i = it;i<n;i++){
                if(it != i && arr[i] == arr[i-1]) continue;
                temp.push_back(arr[i]);            
                solve(arr,n,ans,temp,i+1,target,sum+arr[i]);
                temp.pop_back();

            }    
        }else{
            return;
        }   
    }
    vector<vector<int>> combinationSum2(vector<int>& arr, int target){
        vector<vector<int>>ans;
        vector<int>temp;
        int n = arr.size();
        sort(arr.begin(),arr.end());
        solve(arr,n,ans,temp,0,target,0);
        return ans;        
    }

};
*/