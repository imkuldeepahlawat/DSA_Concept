// binery search with recurssion
#include<iostream>
using namespace std;

bool issorted(int arr[],int size){
    // base case for
    // if the size is zero or 1 then it is already sorted
    if(size==0 || size==1){
        return true;
    }
    // base case for
    // if the 0th element of arr is greater then 1st element of arr 
    if(arr[0]>arr[1]){
        return false;
    }
    // else for continue recurssion
    else{
        bool remainingpart = issorted(arr + 1,size - 1);
        return remainingpart;
    }
}

int main(){
    int arr[5]={2,4,6,8,9};
    int size= 5;

    bool  ans = issorted(arr,size);
    if(ans){
        cout<<endl;
        cout<<"The Element is Present";
        cout<<endl;
    }
    else{
        cout<<endl;
        cout<<"The Element is absent";
        cout<<endl;
    }

}