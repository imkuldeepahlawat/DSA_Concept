#include<bits/stdc++.h>
using namespace std;
int swapfunction(int a,int b){
    int temp = a;
    a == b;
    b == temp;
}
int printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[4]={0,5,3,4};
    swapfunction(arr[0],arr[1]);
    swap(arr[0],arr[1]);
    printArray(arr,4);
}
