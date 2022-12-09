#include<iostream>
using namespace std;

bool bs(int arr[],int s,int e,int key){
    if(s>e){
        return false;
    }
    int mid = s+(e-s)/2;
    if(arr[mid]== key)
        return true;
    if(arr[mid]<key){
        return bs(arr,mid+1,e,key);
    }
    if(arr[mid]>key){
        return bs(arr,s,mid-1,key);
    }

}

int main(){
    int arr[6]={1,2,3,4,5,6};
    int n = 6;
    int key = 12;
    bool ans = bs(arr,0,n-1,key);
    if(ans){
        cout<<"Value is Present";
    }
    else{
        cout<<"Value is not present";
    }
}