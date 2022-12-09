// jaggered array
#include<iostream>
using namespace std;

int main(){
    // creation of the array
    int n = 3;
    int col[3]={0,1,2};
    int **arr = new int*[n];
    for(int i = 0;i<n;i++){
        arr[i] = new int[col[i]];
    }

    // taking input here
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    // taking output here
    int count = 1;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<count;j++){
            cout<<arr[i][j]<<" | ";
        }cout<<endl;
    }
    count  = 0;

    // !dont delete this 
    // releasing memory here 
    for(int i = 0;i<n;i++){
        delete [] arr[i]; 
    }
    delete []arr;
}