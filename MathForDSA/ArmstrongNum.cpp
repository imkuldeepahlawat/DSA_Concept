#include <bits/stdc++.h>
using namespace std;

string armstrongNumber(int n)
{
    // code here
    int ans = 0;
    int temp = n;

    while (temp)
    {
        int digit = temp % 10;
        ans += (digit * digit * digit);
        temp /= 10;
    }

    if (ans == n)
    {
        return "Yes";
    }
    else
    {
        return "No";
    }
}

int main()
{
    string ans = armstrongNumber(153);
    printf("%d\n", ans);
}