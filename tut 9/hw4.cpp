#include<bits/stdc++.h>
using namespace std;

bool finTheNumber(int arr[],int size,int n){
    for(int i = 0;i<=size;i++){
        if(arr[i]==n){
            return 1;
        }
    }
    return 0;
}
 int main()
 {
    int aary[10]={5,7,-2,10,22,-2,0,5,22,1};
    bool found = finTheNumber(aary,10,1);
    if(found){
        cout<<" Element is present"<<endl;
    }
    else{
        cout<<"Element is Absent"<<endl;
    }
    return 0;

 }