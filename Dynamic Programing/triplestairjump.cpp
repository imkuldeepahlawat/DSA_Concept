#include <bits/stdc++.h>

using namespace std;

uint64_t number_of_ways(uint64_t n)
{
      uint64_t res[n+1];
      res[0] = 1;
      res[1] = 1;
      res[2] = 2;
      // using mod to handle overflow of integar
      uint64_t mod = 1000000007;
      for(uint64_t i = 3;i<=n;i++){
            res[i] = (res[i-1]+res[i-2]+res[i-3])%mod;
      }      
      return res[n];
}


int main()
{
    uint64_t n;
    cin >> n;

    cout << number_of_ways(n) << endl;
}
