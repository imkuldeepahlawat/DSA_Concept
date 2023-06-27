/**
 * using map
 * class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int ,int> tmap;
        int n = nums.size();
        vector<int> ans;
        for(int i = 0;i<n;i++){
            tmap[nums[i]]++;
        }
        int cmp = n/3;
        for(auto it: tmap){
            if(it.second > cmp ) ans.push_back(it.first);
        }
        return ans;
    }
};
*/

/**
 * using extended boyer moores algorithm
 * class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1 = 0,cnt2 = 0;
        int el1, el2;
        int n = nums.size();
        for(int i = 0;i<n;i++){

            if(cnt1 == 0 && nums[i] != el2){
                el1 = nums[i];
                cnt1 = 1;
            }else if(cnt2 == 0 && nums[i] != el1){
                el2 = nums[i];
                cnt2 = 1;
            }
            else if(nums[i] == el1) cnt1++;
            else if(nums[i] == el2) cnt2++;
            else{
                cnt1--;
                cnt2--;
            }
        }
        vector<int> ans;
        int ncnt1 = 0;
        int ncnt2 = 0;

        for(int i = 0;i<n;i++){
            if(nums[i] == el1) ncnt1++;
            if(nums[i] == el2) ncnt2++;
        }
        int cmp = n/3;
        if(ncnt1 > cmp) ans.push_back(el1);
        if(ncnt2 > cmp) ans.push_back(el2);
        return ans;
    }
};
 * 
*/