#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 10;
    int i = 2;
    bool l = true;
    for(;i<n;i++){
        if(n%i==0){
            l = false;
        }
    }
    if(l == true){
        cout<<endl<<n<<" is a prime number "<<endl;
    }
    else{
        cout<<endl<<n<<" is not a prime number"<<endl;
    }
}