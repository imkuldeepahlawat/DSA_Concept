#include<bits/stdc++.h>
using namespace std;

int Pivot(int arr[],int n){
    int s=0,e=n-1;
    int mid = s+(e-s)/2;
    while(s<e){
        if(arr[mid] >= arr[0]){
            s=mid+1;
        }
        else{
            e= mid;
        }
        mid= s+(e-s)/2;
    }
    return s;
}

int main(){
    int ar[7]={6,7,8,9,10,1,3};
    cout<<endl;
    cout<<" 1->"<<ar[Pivot(ar,7)]<<endl;
    cout<<" 2->"<<Pivot(ar,7)<<endl;
    cout<<" 3->"<<Pivot(ar,7)<<endl;
}