#include<iostream>
using namespace std;

int main(){
    // int n = 9;
    // int *arr = new int[n];
    // // filling up the array
    // for(int i = 0;i<n;i++){
    //     cin>>arr[i];
    // }
    // // printing array
    // for(int i = 0;i<n;i++){
    //     cout<<arr[i]<<", ";
    // }

    // cout<<endl<<"Deleting the array"<<endl;
    // delete []arr;
    int row = 3;
    int col = 3;
    // creating the 2d array
    int **arr = new int*[row];
    for(int i = 0; i<row;i++){
        // creating columns
        arr[i] = new int[col];
    }
    
    // taking input
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    // taking output
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            cout<<arr[i][j]<<" | ";
        }cout<<endl;
    }
    // releasing memory
    //deleting the array
    for(int i = 0; i<row;i++){
        delete [] arr[i];
    }
    delete []arr;
}