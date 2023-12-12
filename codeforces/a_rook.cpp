#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define PI 3.1415926535897932384626433832795
using namespace std;
#define fast_io                \
    ios_base::sync_with_stdio; \
    cin.tie(0);                \
    cout.tie(0);
 
 
 
int main()
{
    fast_io;
    
 
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        char p = 'a';
        for (ll j = 1; j <= 8; j++)
        {
            if (j != s[1] - '0')
                cout << s[0] << j << endl;
            if (p != s[0])
                cout << p << s[1] << endl;
            p++;
        }
    }
    // cerr << "Time:" << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms" << endl;
    return 0;
}