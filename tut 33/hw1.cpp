// sum of an array
// 3 2 5 6
// using recurssion
#include<iostream>
using namespace std;

int issum(int arr[],int n){
    int ans = 0;
    // base case 
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return arr[0];
    }
    int remainingpart = issum(arr+1,n-1);
    int sum = arr[0] + remainingpart;
    return sum;


}

int main(){
    int arr[4]={3,2,5,8};
    int size = 4;
    cout<<issum(arr,size);

}