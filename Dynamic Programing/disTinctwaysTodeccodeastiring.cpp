#include <bits/stdc++.h>
using namespace std;

class DecodeWays {
    public:
        int dp[5001];
        int n = 0;
        int mod = 1e9+7;
        // Implement Your Solution Here
        int solve(string &s,int pos){
            if(pos == n) return 1;
            if(s[pos] == '0') return 0;
            if(dp[pos] != -1) return dp[pos];
            // for one only
            int cnt = solve(s,pos+1);
            // for two word only
            int cnt_2 = 0;
            if(pos < n-1 ){
                int num = (s[pos] -'0') * 10 + (s[pos+1] - '0');
                if(num <= 26){
                    cnt_2 = solve(s,pos+2);
                }
            }
            return dp[pos] = (cnt+cnt_2)%mod;
        }
        int numDecodings(string s) {
            
            n = s.size();
            if(n == 1 && s[0] == '0') return 0;
            memset(dp,-1,sizeof(dp));
            int ans = solve(s,0);
            return ans%mod;
        }
};

int main() {
    string s;
    cin >> s;
    int result = DecodeWays().numDecodings(s);
    cout << result;
    return 0;
}
