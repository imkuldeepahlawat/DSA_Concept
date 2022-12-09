#include<bits/stdc++.h>
using namespace std;

// Euclid's GCD algorithm
int gcdlcf(int a , int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    while(a!=b){
        if(a>b){
            a = a-b;
        }
        else{
            b = b-a;
        }
    }
    return a;
}

int main(){
    int a = 5, b = 8;
    int x =  gcdlcf(a,b);
    cout<<" the gcd is "<<x<<endl;
}