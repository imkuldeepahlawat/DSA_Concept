#include<bits/stdc++.h>
using namespace std;

bool isPossible(int arr[],int n,int m,int mid){
    int studentCount = 1;
    int pagesum = 0;
    for(int i = 0;i<n;i++){
        if(pagesum + arr[i] <= mid){
            pagesum = pagesum + arr[i];
        }
        else{
            studentCount++;
            if(studentCount > m || arr[i] > mid){
                return false;
            }
            pagesum = arr[i];
        }
    }
    return true;
}

int main(){
    int n = 4; //number of books or siz eof an array
    int m = 2; //(number of students)
    int arr[4]={ 5,5,5,5 };
    int s = 0;
    int sum = 0;
    //calculation sum of the array for search space
    for(int i = 0;i<n;i++){
        sum = sum + arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(isPossible(arr,n,m,mid) == true){
            ans = mid;
            e = mid - 1;
        }
        else if(isPossible(arr,n,m,mid) == false){
            s = mid + 1;
        }
        mid = s+(e-s)/2;
    }
    cout<<"The Ans Is :- "<<ans<<endl;
}