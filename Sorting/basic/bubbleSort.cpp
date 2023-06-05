#include<bits/stdc++.h>
using namespace std;

// sort
void solve(int arr[],int n ){

    for(int i = 0;i<n-1;i++){
        int swapcnt = 0;
        for(int j = 0;j<n-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapcnt++;
            }
        }
        if(swapcnt == 0){
            break;
        }
    }

  
}
int main(){

    int n = 6;
    int  arr[n] = {6,5,4,3,2,1};
    solve(arr,n);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}