// calculator using switch
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    char op;
    cout<<"Enter your Value Here"<<endl;
    cin>>a;
    cout<<"Enter your Second value Here"<<endl;
    cin>>b;
    cout<<"Enter your Operation Here"<<endl;
    cin>>op;
    switch(op){
        case '+': cout<<(a+b);
        break;
        case '-': cout<<(a-b);
        break;
        case '*': cout<<(a*b);
        break;
        case '/': cout<<(a/b);
        break;
        case '%': cout<<(a%b);
        break;
        default: cout<<"Please enter the correct value";
        break;
    }

}