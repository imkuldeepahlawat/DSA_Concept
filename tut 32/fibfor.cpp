#include<bits/stdc++.h>
using namespace std;

void forfib(int n){
    int n1 = 0;
    int n2 = 1;
    int n3 = 0;
    cout<<n1<<", "<<n2<<", ";
    for(int i = 0;i<n;i++){
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
    }
    cout<<n3<<", ";
}

int main(){
    int n = 5;
    forfib(n);
}