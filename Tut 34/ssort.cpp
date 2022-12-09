#include<bits/stdc++.h>
using namespace std;

void selsort(int *a,int i){
    int n = sizeof(a);
    // base case
    if(i>n-1){
        return ;
    }
    int min = 0;
    for(int j = 0;i<n-1;j++){
        if(a[j] > a[min]){
            min = j;
        }
    }
    swap(a[min],a[i]);
    selsort(a,i++);

}

int main(){
    int a[5]={64,25,12,22,11};
    selsort(a,0);
    for(int i = 0;i<5;i++){
        cout<<a[i]<<", ";
    }
}