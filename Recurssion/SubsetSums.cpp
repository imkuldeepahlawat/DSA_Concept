// //{ Driver Code Starts
// #include<bits/stdc++.h> 
// using namespace std; 

// // } Driver Code Ends
// class Solution
// {
// public:
//     void solve(vector<int>&arr,int n,vector<int>&ans,int i,int sum){
//         // base case
//         if(i >= n){
//             ans.push_back(sum);
//             return;
//         }
        
        
//         solve(arr,n,ans,i+1,sum);
//         solve(arr,n,ans,i+1,arr[i]+sum);
//         return;
//     }
//     vector<int> subsetSums(vector<int> arr, int N)
//     {
//         // Write Your Code here
//         vector<int>ans;
//         solve(arr,N,ans,0,0);
//         return ans;
//     }
// };

// //{ Driver Code Starts.
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int N;
//         cin>>N;
//         vector<int> arr(N);
//         for(int i = 0 ; i < N ; i++){
//             cin >> arr[i];
//         }
//         Solution ob;
//         vector<int> ans = ob.subsetSums(arr,N);
//         sort(ans.begin(),ans.end());
//         for(auto sum : ans){
//             cout<< sum<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// } Driver Code Ends