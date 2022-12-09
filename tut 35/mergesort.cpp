// mersge sort array using recurssion
#include<bits/stdc++.h>
using namespace std;
void merges(int *arr,int s, int e){
    int mid = s+(e-s)/2;
    //length of first array
    int len1 = mid-s+1;
    //length of second array
    int len2 = e-mid;

    //temp arrray 1 
    int *first = new int[len1];
    int *second = new int[len2];

    // copy karrde value in half array
    int mai = s;
    for(int i = 0;i<len1;i++){
        first[i] = arr[mai++];
    }
    // copy value of ast half array
    mai = mid + 1;
    for(int i = 0;i<len2;i++){
        second[i] = arr[mai++];
    }

    //merge and sort  both arrays
    int index1 = 0;
    int index2 = 0;
    mai = s;
    while(index1<len1 && index2&&len2){
        if(first[index1]<second[index2]){
            arr[mai] = first[index1++];
        }
        else{
            arr[mai] ==second[index2++];
        }
    }
    //if length of one of them is maximum the each other        
    while(index1<len1){
        arr[mai++] = first[index1++];
    }
    while(index2<len2){
        arr[mai++] = second[index2++];
    }
    delete []first;
    delete []second;
}

void solve(int *arr,int s, int e){
    // base case is here
    if(s>=e){
        return ;
    }
    int mid = s+(e-s)/2;
    // left part sort karne ke liye
    solve(arr,s,mid);  //reccursive call for function
    // right wala part karne ke liye
    solve(arr,mid + 1,e); //reccursive call for function
    // merge karne ke liye function
    merges(arr,s,e);
}

int main(){
    int arr[10]={2,3,7,8,4,5,1,9,0,6};
    int n = 10;
    solve(arr,0,n-1);
    // printing the sorted array
    for(int i = 0;i<=n-1;i++){
        cout<<arr[i]<<", ";
    }
    cout<<endl;

}