#include<bits/stdc++.h>
using namespace std;

void spiralPrint(vector<vector<int>> arr1,int nRows, int nCols)
{
    int cnt = 0;
    int total = nRows*nCols;
    int scol = 0;
    int ecol = nCols-1;
    int srow = 0;
    int erow = nRows-1;
    while(cnt<total-1){
        // printing first col to last col 
        for(int i = scol;i<=ecol && cnt<total-1;i++){
            cout<<arr1[srow][i]<<" ";
            cnt++;
        }
        srow++;
        // starting row se last roww tak chalade bhai
        for(int i =srow;i<=erow && cnt<total-1;i++){
            cout<<arr1[i][ecol]<<" ";
            cnt++;
        }
        ecol--;
        // last colmn se first colmn tak
        for(int i = ecol;i>=scol && cnt<total-1;i--){
            cout<<arr1[erow][i]<<" ";
            cnt++;
        }
        erow--;
        // last row se first row tak
        for (int i = erow; i>= srow && cnt<total-1; i--)
        {
            cout<<arr1[i][scol]<<" ";
        }
        scol++;
    }
}

int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    for(int row = 0;row<3;row++){
        for(int col=0;col<3;col++){
            cout<<arr[row][col]<<" | ";
        }
        cout<<endl;
    }

}