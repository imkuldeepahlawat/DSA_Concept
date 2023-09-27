#include <bits/stdc++.h>
using namespace std;

void solve( int i,int n){
    if(i == n) return;

    printf("Kuldeep\n");
    solve(i+1,n); 
}

int main(){

    int n = 5;
    // cin>>n;
    // recursively solve
    printf("Recurrsively Manner\n");
     solve(0,n);
    /**
     * Time complexity = O(n)
     * Space complexity = O(n) internal stack memory use 
    */

    
}