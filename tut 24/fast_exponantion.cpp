#include<bits/stdc++.h>
using namespace std;
int fac(long long int n){
    long long int m = pow(10,9)+7;
    long long int ans = 1;
    int i = 1 ;
    while(i<n){
        int j = i + 1;
        ans = (ans)%m * j;
        i++;
    }
    return ans;
}

// modular exponantion
int main(){
    int a = 212;
    int b = fac(a);
    float c  = pow(5,3);
    cout<<"factorial of a is ;- "<<b<<endl;
}