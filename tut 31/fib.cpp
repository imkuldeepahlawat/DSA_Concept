#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    // base case
    if(n<=1){
        return n;
    }
    int ans = fib(n-1) + fib(n-2);
   return ans;
}

int main(){
    int n = 9;
    cout<<"this is nth Fibonacci Number "<<endl<<fib(n)<<endl;
    // getchar();
    return 0;
}