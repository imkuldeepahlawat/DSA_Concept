// find Unique Number in the array
#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Entring in the programme"<<endl;
    cout<<"Taking input for array"<<endl;
    int size;
    cin>>size;
    int arr[size];
    // filling elements in the array
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int ans= 0;
    // finding unique number in the array
    for(int i=0;i<size;i++){
        ans= ans^arr[i];
    }
    // returning answer
    cout<<ans<<endl;

}