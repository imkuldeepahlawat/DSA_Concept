#include <bits/stdc++.h>
using namespace std;

// vector<int> twoNonRepeatingNumbers(int arr[], int n)
// {
//     // using hashmap
//     // using bitmanipulation
//     // found the xor of both value
//     int res = 0;
//     for (int i = 0;i<sizeof(arr);i++)
//     {
//         res = res ^ arr[i];
//     }
//     // find the bit of res
//     // taking 2s complement
//     int temp = res & (-res);
//     int a = 0, b = 0;
//     //    again doing same process but with rightmost bit
//     for (int i = 0;i<sizeof(arr);i++)
//     {
//         if (arr[i] & temp == 1)
//         {
//             a = a ^ arr[i];
//         }
//         else
//         {
//             b = b ^ arr[i];
//         }
//     }
//     // sorting and returning
//     vector<int> ans(2, -1);
//     if (a < b)
//     {
//         ans[0] = a;
//         ans[1] = b;
//     }
//     else
//     {
//         ans[0] = a;
//         ans[1] = b;
//     }
//     return ans;
// }

int main()
{
    int n = 8;
    int arr[8] = {2, 3, 7, 9, 11, 2, 3, 11};

    /*vector<int> ans = twoNonRepeatingNumbers(arr, n);*/
    for(int i = 0;i<sizeof(arr);i++){
        cout<<arr[i]<<endl;
        if(i >8){
            cout<<"this is garbage value"<<endl;
        }
    }
}