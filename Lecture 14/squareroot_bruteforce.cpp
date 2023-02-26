#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 35 ;
    int i = 0;
    int ans;
    while(i<=n){
        ans = i*i;
        if(ans==n){
            cout<<"The root is "<<i<<endl;
            break;
        }
        i++;
    }
}