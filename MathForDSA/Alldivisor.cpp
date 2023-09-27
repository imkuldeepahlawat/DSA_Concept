#include <bits/stdc++.h>
using namespace std;

long long sumOfDivisors(int N)
{
    // Write Your Code here
    long long ans = 0;
    for (int i = 1; i <= N; i++)
    {
        ans += i * (N / i);
    }
    return ans;
}

int main()
{
    long long ans = sumOfDivisors(11);
    printf("%d\n", ans);
}