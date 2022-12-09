#include<bits/stdc++.h>
using namespace std;

void printarray(int arr[],int m){
    for(int i=0;i<=m;i++){
        cout<<arr[i]<<", ";
    }
}

void bubbleSort(int arr[], int n){   
//     unoptimised
    for(int i=0;i<n;i++){
//         rond i th till n
        for(int j = 0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<", ";
    }
    return;
}
int main(){
    int n = 5;
    int arr[5]={6, 2, 8, 4, 10};
    cout<<endl;
    printarray(arr,n);
    cout<<endl;
    bubbleSort(arr,n);
       
}