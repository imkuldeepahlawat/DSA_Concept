/*

1
2 3
3 4 5
4 5 6 7

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i,j, k;
    cin>>n;
    i= 1;
    while(i<=n){
        j= 1;
        int count = i ;
        while(j<=i){
        cout<<count<<" ";
        count = count + 1;
        j = j + 1;          
        }
        cout<<endl;
        i = i + 1;
    }
}