#include<bits/stdc++.h>
using namespace std;

void reachhome(int src,int dest){
    if(src==dest){
        cout<<"Pahuch Gaye Ghar"<<endl;
        return ;
    }
    // processing :- ek step leta ja
    src++;
    //recurssive call
    reachhome(src,dest);
}

int main(){
    int src = 1;
    int des = 10;

    reachhome(src,des);
}