#include <bits/stdc++.h>
using namespace std;
// memoriazation array
int cache[1001][1001];
// top down solution
int solve(vector<int> &price, vector<int> &length, int rod, int n)
{

    if (rod == 0)
        return 0;
    if (n == 0)
        return 0;
    if (cache[n][rod] != -1)
        return cache[n][rod];
    if (length[n - 1] <= rod)
    {
        return cache[n][rod] = max(price[n - 1] + solve(price, length, rod - length[n - 1], n), solve(price, length, rod, n - 1));
    }
    else
    {
        return cache[n][rod] = solve(price, length, rod, n - 1);
    }
}
// bottom up solution tabulation
int solve2(vector<int> &price,vector<int> &length,int rod,int n){
      int t[n+1][rod+1];
      // initializing the array
      for(int i = 0;i<=n;i++){
            t[i][0] = 0;
            t[0][i] = 0;
      }
      for(int i = 1;i<=n;i++){
            for(int j = 1;j<=rod;j++){
                  if(length[i-1] <= j){
                        t[i][j] = max(price[i-1]+t[i][j-length[i-1]],t[i-1][j]);
                  }else{
                        t[i][j] = t[i-1][j];
                  }
            }
      }
      return t[n][rod];

      
}
int rodCutting(int n,vector<int> &prices){
   
      // n = capacity
      // prices = weight array
      vector<int>length;
      for(int  i = 1;i<=n;i++) length.push_back(i);

      // memset(cache,-1,sizeof(cache));
      // int ans = solve(prices,length,n,n);
      int ans = solve2(prices,length,n,n);

      return ans;
}