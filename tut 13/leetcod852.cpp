// Peaky index in a mountain
#include<bits/stdc++.h>
using namespace std;

int peakyMountain(int arr[],int n){
    int s = 0;
    int e = n - 1;
    int mid = s +(e-s)/2;
    while(s<e){
        if(arr[mid] < arr[mid+1]){
            cout<<"S is before "<<s<<endl;
            s=mid+1;
            cout<<"Now S= "<<s;
        }
    	else{
      		e = mid;
        }
    
		mid = (s + e) / 2;
    }
    return s;
}

int main(){
   int arr[3]={0,1,0};
   cout<<endl<<peakyMountain(arr,3)<<endl;
}