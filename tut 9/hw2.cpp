// sum of an array
#include<bits/stdc++.h>
using namespace std;

int sumOfArray(int arr[], int n)
{
    int ans = 0; //initialize suum 
    //calculate one by one 
    //add them in to sum
    for(int i = 0; i < n; i++)
    {
        ans = ans + arr[i];
    }
    // returning answer
    return ans;
}

int main()
{
    cout<<endl;
    // initialize an array
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"sum of the array is :- " << sumOfArray(arr,n)<<endl;
    cout<<endl;
}