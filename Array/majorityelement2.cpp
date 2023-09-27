/**
 *using hash map 
 * class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int ,int> tmap;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            tmap[nums[i]]++;
        }
        int cmp = n/2;
        for(auto it: tmap){
            if(it.second > cmp )return it.first;
        }
        return -1;
    }
};
*/

/**
 * using more algorithm
 * class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0;
        int el;

        int n = nums.size();
        for(int i = 0;i<n;i++){
            if(cnt == 0){
                el = nums[i];
                cnt = 1;
            }
            else if(el == nums[i]){
                cnt++;
            }else{
                cnt--;
            }
        }

        return el;
    }
};
*/