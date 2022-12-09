// linear serch using recurssion
#include<iostream>
using namespace std;
bool lsr(int arr[],int size,int k){
    int s = 0;
    if(size==0){
        return false;
    }
    if(arr[s]!=k){
        return lsr(arr+1,size-1,k);        
    }
    if(arr[s]==k){
        return true;
    }
    return false;
}

int main(){
    int arr[5]={3,5,1,2,6};
    int size = 5;
    int k = 1;
    int ans = lsr(arr,size,k);
    if(ans){
        cout<<"Value is Present";
    }
    else{
        cout<<"Value is not present";
    }
}