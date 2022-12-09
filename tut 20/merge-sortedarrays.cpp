#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
    vector<int>& nums1;
    int m=6;
    vector<int>& nums2;
    int n=3;
    int k=0;
    int i=0;
    int j=0;
    vector<int> nums3;
    while(i<m and j<n){
        if(nums1[i]<nums2[j])
            nums3.push_back(nums1[i++]);
    else
        nums3.push_back(nums2[j++]);
    }
    
    while(i<m){
        nums3.push_back(nums1[i++]);
    }
    while(j<n){
        nums3.push_back(nums2[j++]);
    }
    nums1=nums3;
    for(int)
}
