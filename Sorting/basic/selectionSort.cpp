#include<bits/stdc++.h>
using namespace std;

// sort
void solve(int arr[],int n ){

    for(int i = 0;i<n-1;i++){
        int mini = i; 
        for(int j = 0;j<n;j++){
            if(arr[j] <arr[i]){
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }

    return;
}
int main(){

    int n = 6;
    int  arr[n] = {6,5,4,3,2,1};
    solve(arr,n);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}