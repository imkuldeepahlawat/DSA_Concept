#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int x = 5;
    int s = 0;
    int e = 7-1;
    int m = s+(e-s)/2;
    int ans = -1;
    while(s<=e){
        cout<<m<<s<<e<<endl;
        if(arr[m] == x){
            ans = m;
            break;
            // return ans;
        }
        // right part
        if(x > arr[m]){
            s = m+1;
        }
        else{
            e = m-1;
        }
        m = s + (e-s)/2; 
    }
    cout<<"This is answer"<<endl;
    cout<<ans<<endl;


}