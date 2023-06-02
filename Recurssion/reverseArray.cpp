#include <bits/stdc++.h>
using namespace std;

void solve(int *arr,int s,int e){
    if(s>=e)return;
    swap(arr[s],arr[e]);
    solve(arr,s+1,e-1);
    
}

int main(){

    int arr[5] = {1,2,3,4,5};
    // cin>>n;
    // recursively solve
   
   for (int i = 0; i < 5; i++)
   {
    /* code */
    cout<<arr[i]<<" ";
   }
   cout<<endl;
    solve(arr,0,4);
   for (int i = 0; i < 5; i++)
   {
    /* code */
    cout<<arr[i]<<" ";
   }

    
}