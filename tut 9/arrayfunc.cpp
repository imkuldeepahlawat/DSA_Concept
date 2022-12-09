#include<bits/stdc++.h>
using namespace std;
// function of arrray
void printingArray(int arr[],int size){
    cout<<"printing the array"<<endl;
    // printing the array
    for(int i = 0; i<size;i++){
        cout<<arr[i]<<" "<<endl;
    }
    cout<<"Printing Done"<<endl;
}
int main(){
    int third[15]={2,7,};
    int n = 15;
    printingArray(third,n);
}