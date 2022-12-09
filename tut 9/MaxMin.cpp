#include<bits/stdc++.h>
using namespace std;
// retturning min value
int getMin(int num[], int n){
    int min = INT_MAX;
    for(int i=0; i<n ;i++){
        if (num[i] < min){
            min = num[i];
        }
    }
    // returning min value
    return min;
}
// returning max value
int getMax(int num[],int n){
    int max = INT_MIN;
    for(int i=0; i<n ;i++){
        if (num[i] > max){
            max = num[i];
        }
    }
    // returning max value
    return max;
}
int main(){
    while(1){
        int size;
        cout<<"Enter the size"<<endl;
        cin>>size;
        int num[100];
        cout<<"Enter the Arrays"<<endl;
        for(int i = 0; i<size;i++){
            cin>>num[i];
        }
        cout<<" Maximum value is " << getMax(num,size)<<endl;
        cout<<" Minimum value is " << getMin(num,size);
        cout<<endl;
    }
}