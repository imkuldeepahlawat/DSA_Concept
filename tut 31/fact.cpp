#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    // base case
    if(n==0){
        return 1;
    }
    int smallerproblem = fact(n-1);
    int Biggerproblem = n * smallerproblem;
}

int main(){
    int n = 5;
    cout<<fact(n);
}