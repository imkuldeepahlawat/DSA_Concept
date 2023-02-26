#include<bits/stdc++.h>
using namespace std;

int printarray(int arr[],int n){
    cout<<"Your array is"<<endl;
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int firstoccurance(int arr[],int n,int k){
    int s = 0, e = n-1, ans= -1, mid = s+(e-s)/2;
    while(s<e){
        if(arr[mid]==k){
            ans = mid;
            e = mid;
        }
        else if(k>arr[mid]){
            s= mid+1;
        }
        else if(k<arr[mid]){
            e= mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int lastoccurance(int arr[],int n,int k){
    int s = 0, e = n-1, ans= -1, mid = s+(e-s)/2;
    while(s<e){
        if(arr[mid]==k){
            ans = mid;
            s = mid + 1;
        }
        else if(k>arr[mid]){
            s= mid+1;
        }
        else if(k<arr[mid]){
            e= mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int main(){
    int arr[5]={1,3,3,3,4};
    int key= 5;
    printarray(arr,5);
    cout<<endl<<"Yaha tak chal raha hai"<<endl;
    cout<<"First Index of 3 is "<<firstoccurance(arr,5,3);
    cout<<endl;
    cout<<"last Index of 3 is "<<lastoccurance(arr,5,3);
}