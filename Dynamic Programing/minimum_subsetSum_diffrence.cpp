/************
 * interviewbit
 * vector<int> subsetSum(vector<int> &arr,int sum){
    int n = arr.size();
    bool t[n+1][sum+1];
    // initializing matirx
    for(int i = 0;i<=n;i++){
        for(int j = 0;j<=sum;j++){
            if(i == 0){
                t[i][j] = false;
            }
            if(j == 0){
                t[i][j] = true;
            }
        }
    }
    
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=sum;j++){
            if(arr[i-1] <= j){
                t[i][j] = t[i-1][j-arr[i-1]] ||t[i-1][j];
            }else{
                t[i][j] = t[i-1][j];
            }
        }
    }
    
    
    vector<int>ans;
    
    for(int i = 0;i<=sum/2;i++){
        if(t[n][i] == true) ans.push_back(i);
    }
    
    return ans;  
    
}
int Solution::solve(vector<int> &arr) {
    int sum= 0;
    int n = arr.size();
    for(int i = 0;i<n;i++){
        sum += arr[i];
    }
    vector<int>  s1 = subsetSum(arr,sum);
    
    int mini = INT_MAX;
    
    for(int i = 0;i<s1.size();i++){
        mini = min(mini,sum-2*(s1[i]));
    }
    
    return mini;
}

*/