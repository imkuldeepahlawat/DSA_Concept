#include <bits/stdc++.h>
using namespace std;

void solve( int i){
    if(i < 0) return;

    cout<<i<<endl;
    solve(i-1); 
}

int main(){

    int n = 5;
    // cin>>n;
    // recursively solve
    printf("Recurrsively Manner\n");
     solve(4);
    /**
     * Time complexity = O(n)
     * Space complexity = O(n) internal stack memory use 
    */

    
}