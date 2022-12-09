// factorial calculator
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n = 10;
    long long int r = n/2;
    long long int ans = 1;
    for(int i = 1;i<=n;i++){
        ans = ans*i;
    }
    cout<<endl<<ans<<endl;
}