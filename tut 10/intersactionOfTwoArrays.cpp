#include<vector>
using namespace std;
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
//     initialize variable
    int i = 0, j = 0;
    vector<int>ans;
//     loop until all elements are not check
    while(i<n && j<m){
//         if match then i++ and j++
        if(arr1[i]==arr2[j]){
//             sending i to vector as an answer
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
//         if arr1 element is small then i++
        else if(arr1[i]<arr2[j]){
            i++;
        }
        //         if arr2 element is small then i++
        else{
            j++;
        }
    }
//     returning answer
    return ans;
}