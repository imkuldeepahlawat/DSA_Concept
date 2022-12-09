// binary search with recursiive approach
// peaky mountain in array
#include<bits/stdc++.h>
using namespace std;

int peakymountain(int arr[],int s,int e){
    if(s>=e){
        return s;
    }
    int mid = s+(e-s)/2;
    if(arr[mid]>arr[mid+1]){
        return arr[mid];
    }
    
}

int main(){
    int arr[7]={1,2,3,4,3,2,1};
    int n = 7;
    int arr1[3]={0,1,0};
    int n2 = 3;
    int ans = peakymountain(arr,0,n-1);
    cout<<ans;
}