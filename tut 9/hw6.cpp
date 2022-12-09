#include<bits/stdc++.h>
using namespace std;

// returning minimum value
int getmin(int num[],int n){
    int min = INT_MAX;
    for(int i=0; i<n ;i++){
        if(num[i] < min){
            min = num[i];
        }
    }
    // returning minimum value
    return min;
}

// returning maximum value
int getmax(int num[],int n){
    int max = INT_MIN;
    for(int i=0; i<n ;i++){
        if(num[i] > max){
            max = num[i];
        }
    }
    // returning minimum value
    return max;
}

int main()
{
    while(1){
        int size;
        cout<<"Enter the size"<<endl;
        cin>>size;
        int num[100];
        cout<<"Enter the Array"<<endl;
        for(int i = 0; i<size;i++){
            cin>>num[i];
        }
        cout<<"Maximum value is " << getmax(num,size)<<endl;
        cout<<"Minimum value is " << getmin(num,size)<<endl;
        cout<<endl;
        
    }
}