#include<bits/stdc++.h>
using namespace std;

void fact1(int n){
    // base case
    if(n==0){
        return ;
    }
    fact1(n-1);
    cout<<n<<endl;
}
void fact2(int n){
    // base case
    if(n==0){
        return ;
    }
    cout<<n<<endl;
    fact2(n-1);
}

int main(){
    int n = 99;
    fact1(n),fact2(n);
}