/*

a a a
b b b
c c c

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
        while(j<=n){
        char converted='a' + i - 1;
        cout<<converted<<" ";
        j = j + 1;          
        }
        cout<<endl;
        i = i + 1;
    }
}