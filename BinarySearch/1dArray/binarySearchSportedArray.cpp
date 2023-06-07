    #include <bits/stdc++.h>
using namespace std;

int binarysearch(int arr[], int n, int k) {
        int s = 0;
        int e = n-1;
        int m = s+(e-s)/2;
        while(s<=e){
            if(k == arr[m]){
                return m;
            }
            if(k > arr[m]){
                s = m+1;
            }
            else{
                e= m-1;
            }
            m = s+(e-s)/2;
        }
        return -1;
    }




int main()
{
    int N = 5, K = 6;
    int arr[N] = {1, 2, 3, 4, 6};
    int ans = binarysearch(arr,N,K);
    // printf("%d\n", ans);
}