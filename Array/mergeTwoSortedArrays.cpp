// without any extra space
/**
 * class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int inx = m;
        int inx2 = 0;
        int totalLen= m+n;
        for(int i = inx;i<totalLen;i++){
            nums1[i] = nums2[inx2++];
        }

        sort(nums1.begin(),nums1.end());
    }
};
*/