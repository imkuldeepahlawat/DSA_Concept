// quick sort
#include<iostream>
using namespace std;

int partition(int arr[],int s,int e){
    int pivot = arr[s];
    int cnt = 0;
    // finding pivot element index
    for(int i = s+1;i<=e;i++){
        if(arr[i]<=pivot){
            cnt++;
        }
    }
    // after find place the element on right place
    int pivotind = s+cnt;
    swap(arr[pivotind],arr[s]);

    // left and right part sambhal lete hai
    int i = s, j = e;

    while(i<pivotind && j>pivotind){
        while (arr[i]<=pivot){
            i++;
        }
        while (arr[j]>pivot){
            j--;
        }
        if (i<pivotind && j>pivotind){
            swap(arr[i++],arr[j--]);
        }
        
    }
    return pivotind;

}

void solve(int arr[],int s ,int  e){
    // base case
    if(s>=e){
        return ;
    }
    // partation karenge
    int p = partition(arr,s,e);

    // left wala part sort kardo
    solve(arr,s,p-1);
}

int main(){
        int arr[5]= {2,4,1,6,9};
        int n = 5;

        solve(arr,0,n-1);
        for(int i = 0;i<n;i++){
            cout<<arr[i]<<", ";
        }
        cout<<endl;
}
