#include<bits/stdc++.h>
#include<vector>
using namespace std;


int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    for(int row = 0;row<3;row++){
        for(int col= 0;col<3;col++){
            cout<<arr[row][col]<<" | ";
        }
        cout<<endl;
    }
    cout<<"Printing Wave"<<endl;
    // wave print
    for(int col = 0;col<3;col++){
        // for odd index -> bottom to top
        if(col & 1){
            for(int row = 3-1;row>=0;row--){
                cout<<arr[row][col]<<" | ";
            }
            cout<<endl;
        }
        else{
            // 0 or even index -> top to bottom
            for(int row = 0; row<3;row++){
                cout<<arr[row][col]<<" | ";
            }
            cout<<endl;
        }
    }
}