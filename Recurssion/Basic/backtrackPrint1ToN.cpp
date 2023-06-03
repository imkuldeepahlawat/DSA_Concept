#include <bits/stdc++.h>
using namespace std;

void solve( int i,int n){
    if(i < 0) return;

    solve(i-1,n); 
    cout<<i<<endl;
}

int main(){

    int n = 5;
    // cin>>n;
    // recursively solve
    printf("Recurrsively Manner\n");
     solve(5,n);
    /**
     * Time complexity = O(n)
     * Space complexity = O(n) internal stack memory use 
    */

    
}