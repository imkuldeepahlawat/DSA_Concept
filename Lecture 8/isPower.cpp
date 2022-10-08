#include<bits/stdc++.h>
using namespace std;

int powerFunction(int a,int b){
    int ans = 1;
    for(int i = 0;i<b;i++){
        ans = ans * a;
    }
    return ans;
}
int main(){
    int a ,b;
    cin>>a;
    cin>>b;
    cout<<powerFunction(a,b);
}