#include<bits/stdc++.h>
using namespace std;

//reversing an array
void reverse(int arr[],int n){
    int start = 0;
    int end = n-1;
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
// printing the array 
void printArray(int arr[],int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={1,4,0,5,-2,15};
    int brr[]={2,6,3,9,4};
    reverse(arr,6);
    reverse(brr,5);

    printArray(arr,6);
    printArray(brr,6);
    return 0;
}