// declare a array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3]={5, 7, 11};
    int arr1[10000]={0};
    cout<<endl;
    cout<<"value at 15 indexes " << arr1[15];
    cout<<endl;
    // initialising an array
    int second[3]={5,7,11};
    cout<<"value at 15 indexes " << second[2]<<endl;
    int third[15]={2,7,};
    int n = 15;
    for(int i = 0;i<n;i++){
        cout<<third[i]<<" ";
    }
    cout<<endl;
    int fourth[10]={0};
    n = 10;
    for(int i = 0;i<n;i++){
        cout<<fourth[i]<<" ";
    }


}
