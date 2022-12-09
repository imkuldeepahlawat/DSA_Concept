#include<bits/stdc++.h>
using namespace std;

bool asrt(int arr[],int n){
    // base case
    if(n==0 || n==1){
        return 1;
    }
    if(arr[n-1] < arr[n-2]){
        return 0;
    }
    return asrt(arr, n-1);
}

int main(){
    int n[9]={1,3,5,5,9,9,13,17,20};
    if(asrt(n,9)){
        cout<<"Array is Sorted";
    }
    else{
        cout<<"Array is Not Sorted";
    }
}