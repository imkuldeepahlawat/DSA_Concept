#include<bits/stdc++.h>
using namespace std;

// print array function
void printArray(int arr[],int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

// pair sum function
int pairSum(int arr[],int n,int key){
    // sort(arr.begin(), arr.end());
    int ans = 0;
    for(int i = 0;i<n;i++){
        for(int j = i ; j<n ; j++ ){
            ans = arr[i]+arr[j];
            if(ans == key ){
                cout<<arr[i]<<" "<<arr[j];
                cout<<endl;
                ans = 0;
            }
        }
    }
}

int main(){
    cout<<" Your Array is"<<endl;
    int arr[5]={1,2,3,4,5};
    sort(arr.begin(),arr.end());
    printArray(arr,5);
    cout<<endl;
    cout<<"Sab thik hai"<<endl;
    pairSum(arr,5,5);


}
/*
// code studio code 1940

#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
vector<vector<int>> pairSum(vector<int> &arr, int s){
    vector<vector<int>>ans;
    
    for(int i=0;i<arr.size();i++){
        for(int j = i+1;j<arr.size();j++){
            if(arr[i] + arr[j] == s){
                vector<int> temp;
                temp.push_back(min(arr[i],arr[j]));
                temp.push_back(max(arr[i],arr[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}

*/