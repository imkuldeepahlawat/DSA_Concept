#include<bits/stdc++.h>
using namespace std;

int rst(int n){
    if(n < 0){
        return 0;
    }
    if(n == 0){
        return 0;
    }
    int ans = rst(n-1)+rst(n-2);
    return ans;
    
}

int main(){
    int n;
    cin>>n;
    cout<<endl<<rst(n)<<endl;
    
}