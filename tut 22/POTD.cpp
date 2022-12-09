#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

// int oddeven

int main(){
    int arr[6]={-1,3,5,0,-1,-5};
    int n = 6;
    int temp[6];
    int o,e,sum;
    o = 5;
    sum = 4%2;
    cout<<sum<<endl;
    // sort(arr.begin(),arr.end());
    for(int i = 0;i<=n-1;i++){
        if(i%2 == 0 && arr[i]>=1){
            continue;
        }
        else if(i%2 == 1 && arr[i]<=0){
            swap(arr[i],arr[i++]);
        }
    }
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<", ";
    }
}