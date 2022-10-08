#include<bits/stdc++.h>
using namespace std;

void py1(int n){
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
    return ;
}

int main(){
    int a = 15;
    py1(a);

}