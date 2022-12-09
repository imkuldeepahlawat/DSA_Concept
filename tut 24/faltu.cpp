#include<iostream>
using namespace std;
void spiralPrint(int **input, int nRows, int nCols)
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
            cout<<input[srow][i]<<" ";
            cnt++;
        }
        srow++;
        // starting row se last roww tak chalade bhai
        for(int i =srow;i<=erow && cnt<total-1;i++){
            cout<<input[i][ecol]<<" ";
            cnt++;
        }
        ecol--;
        // last colmn se first colmn tak
        for(int i = ecol;i>=scol && cnt<total-1;i--){
            cout<<input[erow][i]<<" ";
            cnt++;
        }
        erow--;
        // last row se first row tak
        for (int i = erow; i>= srow && cnt<total-1; i--)
        {
            cout<<input[i][scol]<<" ";
        }
        scol++;
    }
}