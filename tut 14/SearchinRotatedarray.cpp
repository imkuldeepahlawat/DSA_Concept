#include<bits/stdc++.h>
using namespace std;

int binarysearch(int arr[],int start,int end,int key){
    int mid = start+(end-start)/2;
    int ans = -1;
    while(start<end){
        if(key==mid){
            ans = mid;
            break;
        }
        else if(key<mid){
            end = mid-1;
        }
        else if(key>mid){
            start = mid+1;
        }
        mid = start+(end-start)/2;
    }
    return ans;
}

int getpivot(int arr[],int n){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    while(s<e){
        if(arr[0]<arr[mid]){
            s = mid+1;
        }
        else if(arr[0]>arr[mid]){
            e = mid;
        }
        mid = s+(e-s)/2;
    }
    return mid;
}

int searchinsortedarray(int arr[],int n,int key){
    int pivot=getpivot(arr,n);
    if(key>=arr[pivot] && key<=arr[n-1]){
        return binarysearch(arr,arr[pivot],n-1,key);
    }
    else {
        return binarysearch(arr,0,pivot-1,key);
    }
}

int main(){
    int arr[8]={6,7,8,1,2,3,4,5};
    int k = 2;
    int n = 8;
    cout<<arr[getpivot(arr,8)]<<endl;
    cout<<"Function number 3 => "<<searchinsortedarray(arr,n,k)<<endl;
}