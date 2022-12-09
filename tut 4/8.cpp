/*

1
2 1
3 2 1
4 3 2 1

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i,j, k;
    cin>>n;
    i= 1;
    // printing rows
    while(i<=n){
        j= 1;
        // printing colums
        while(j<=i){
        cout<<i-j+1<<" ";
        j = j + 1;          
        }
        cout<<endl;
        i = i + 1;
    }
}