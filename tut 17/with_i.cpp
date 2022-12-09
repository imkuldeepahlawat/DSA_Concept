// unoptimised
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void bubbleSort(vector<int>& arr, int n)
{   
//     unoptimised
    for(int i=1;i<n;i++){
//         rond i th till n
        for(int j =0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
