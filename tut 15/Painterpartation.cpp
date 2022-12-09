#include<bits/stdc++.h>
using namespace std;

bool isthisistrue(int arr[],int n,int sn, int mid){
    int studentCount = 1;
    int pagesum = 0;
    for(int i=0;i<n;i++){
        if(pagesum + arr[i]<= mid){
            pagesum = pagesum + arr[i];
        }
        else{
            studentCount++;
            if(studentCount>sn || arr[i]>mid){
                return false;
            }
            pagesum = arr[i];
        }
    }
    return true;
}


int main(){
    int n = 4;
    int arr[4]={10,20,30,40};
    int sum = 0;
    int s = 0;
    int sn = 2;
    int ans = -1;
    for(int i = 0;i<n;i++){
        sum = sum + arr[i];  
    }
    int e=sum;
    int mid = s+(e+s)/2;
    while(s<=e){
        if(isthisistrue(arr,n,sn,mid)==1){
            ans = mid;
            e = mid - 1;
        }
        else if(isthisistrue(arr,n,sn,mid)==0){
            s = mid + 1;
        }
        mid = s+(e-s)/2;
    }
    cout<<endl<<ans<<endl;
}