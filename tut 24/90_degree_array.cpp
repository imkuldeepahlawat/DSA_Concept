#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int n = 3;
    // n = n-1;
    cout<<"Printing Fresh Array";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int cnt = 1;
    // ----------------------------------------------
    for (int i = 0; i < n; i++)
        reverse(arr[i], arr[i] + n);
    // ----------------------------------------------
    // Performing Transpose
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++)
            swap(arr[i][j], arr[j][i]);
    }
    // printing array
    cout<<endl<<"Printing array from loop ;- "<<cnt<<endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
