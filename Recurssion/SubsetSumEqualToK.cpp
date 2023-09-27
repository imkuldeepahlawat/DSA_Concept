#include <bits/stdc++.h>
using namespace std;
// inclusion exclusion technique
bool solve(int arr[],int sum,int inx,int k){
    

    if(inx == 6){
        if(sum != k){
            return false;
        }else{
            return true;
        }
    }
    if(sum > k){
        return false;
    }
    if(sum == k) return true;
    // taking the word from the string of inx index
    bool ans1 = solve(arr,sum+arr[inx],inx+1,k);
    // not taking the word from the string of inx index
     bool ans2 = solve(arr,sum,inx+1,k);
     return ans1 || ans2;
    
}

int main(){

    int arr[6] = {3 ,34,4,12,5,2};
    // cin>>n;
    // recursively solve
    bool present = solve(arr,0,0,9);

    if(present){
        printf("the sum is present\n");
    }else{
        printf("the sum is not present\n");
    }
    

    
}