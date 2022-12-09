#include<bits/stdc++.h>
using namespace std;

int power(long long int a,long long int b){
    // if b is 0
    if(b==0) return 1;
    // if b is 1
    if(b==1) return a;
    long long int ans = power(a,b/2);
    // if b is odd
    if(b%2==0) return ans*ans;
    // if b is even
    else return a*ans*ans;

}

int main(){
    int a  = 2,b=10;
    long long int ans = power(a,b);
    cout<<endl<<ans<<endl;
}