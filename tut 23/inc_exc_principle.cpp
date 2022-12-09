#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 1000;
    int a = 3;
    int b = 4;
    int c1 = n/a;
    int c2 = n/b;
    int c3 = n/(a*b);
    int ans = c1+c2-c3;
    cout<<endl<<"Inclusion Exclusion Principle;- "<<ans<<endl;
    cout<<endl;
}