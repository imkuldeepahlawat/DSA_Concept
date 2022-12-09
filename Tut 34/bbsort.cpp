#include<bits/stdc++.h>
using namespace std;

void bsort(int *a,int n){
    if(n == 0 || n == 1) return ;

    // swaping highest number to last index
    for(int i=0;i<n-1;i++){
        if(a[i] > a[i+1]){
            swap(a[i],a[i+1]);
        }
    }
    // reccursive call to function
    bsort(a,n-1);
    for(int i = 0;i<5;i++){
        cout<<a[i]<<", ";
    }
    cout<<endl;
}

int main(){
    int a[5]={9,8,7,6,5};
    bsort(a,5);
}