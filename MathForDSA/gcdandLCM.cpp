#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    if (a > b)
    {
        return gcd(a % b, b);
    }
    else
    {
        return gcd(b % a, a);
    }
}
long long lcm(long long a, long long b)
{
    return ((a * b) / gcd(a, b));
}
vector<long long> lcmAndGcd(long long a, long long b)
{
    // code here
    long long ans1 = lcm(a, b);
    long long ans2 = gcd(a, b);
    return {ans1, ans2};
}

int main()
{
    vector<long long> ans = lcmAndGcd(5, 10);
    for(int i = 0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}