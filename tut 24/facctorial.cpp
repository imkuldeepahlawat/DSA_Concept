#include<bits/stdc++.h>
using namespace std;

// normal factorial formula less then 100
int fac(int n){
    int ans=1;
    int i =1;
    while(i<n){
        int j = i + 1;
        ans = ans * j;
        i++;
    }
    return ans;
}

int main(){
    int a = 212;
    int b = fac(a);
    cout<<"factorial of a is ;- "<<b<<endl;
}