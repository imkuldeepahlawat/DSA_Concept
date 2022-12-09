#include<bits/stdc++.h>
using namespace std;
void strev(string& arr){
    int n =arr.length();
    for(int i = 0;i<n/2;i++){
        swap(arr[i],arr[n-i-1]);
    }
    for(int i = 0;i<7;i++){
        cout<<arr[i];
    }
}

int main(){
    string arr = "kuldeep";
    strev(arr);
}