#include<bits/stdc++.h>
using namespace std;

int solve(string str){
    int n = str.size();
    bool dp[n][n];
    memset(dp, 0, sizeof(dp));
    int mLen = 1;

    for(int i = 0;i<n;++i){
        dp[i][i] = true;
    }

    for(int i = 0;i<n-1;++i){
        if(str[i] == str[i+1]){
            dp[i][i+1] = true;           
            mLen = 2;
        }
    }


    for (int k = 3; k <= n; ++k) {
        for (int i = 0; i < n - k + 1; ++i) {
            int j = i + k - 1;
            if (dp[i + 1][j - 1] && str[i] == str[j]) {
                dp[i][j] = true;
 
                if (k > mLen) {
                    mLen = k;
                }
            }
        }
    }
 
   
 
    
    return mLen;
}

int longestPalindromicSubstringLength(int n, string& word){
    // lps longest palindromic substring
    
    return solve(word);
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans = longestPalindromicSubstringLength(n,s);
        cout<<ans<<"\n";    
    }
}
