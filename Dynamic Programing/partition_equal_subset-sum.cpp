/*******
 * 
 * 
class Solution {
public:
    bool solve(vector<int>& nums,int n, int sum){
        if(sum == 0) return true;
        if(n == 0 && sum != 0) return false;


        if(nums[n-1] <= sum){
            return (solve(nums,n-1,sum-nums[n-1]) || solve(nums,n-1,sum));
        }else{
            return solve(nums,n-1,sum);
        }
    }
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int totalSum =   0;

        for(int i =0;i<n;i++){
            totalSum +=nums[i];
        }   
        // if sum is odd
        if(totalSum%2 != 0) return false;

        bool ans = solve(nums,n,totalSum/2);

        return ans;
    }
};
*/


/*************
 *  dp memorization
 * class Solution {
public:
    bool solve(vector<int>& nums,int n, int sum){
        
        bool t[n+1][sum+1];
        for(int i =0;i<n+1;i++){
            for(int j =0;j<sum+1;j++){
                if(i == 0) t[i][j] = false;
                if(j == 0) t[i][j] = true; 
            }
        }

        for(int i =1;i<=n;i++){
            for(int j =1;j<=sum;j++){
                if(nums[i-1] <= j){
                    t[i][j] = t[i-1][j-nums[i-1]] || t[i-1][j];
                }else{
                    t[i][j] = t[i-1][j];
                }
            }
        }

        

        return t[n][sum];
    }
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int totalSum =   0;

        for(int i =0;i<n;i++){
            totalSum +=nums[i];
        }   
        int sum = totalSum/2;
        

        // if sum is odd
        if(totalSum%2 != 0) return false;

        bool ans = solve(nums,n,sum);

        return ans;
    }
};
*/