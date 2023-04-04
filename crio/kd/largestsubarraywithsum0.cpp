#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

vector<int> largestSubarrayWithSumZero(vector<int>& nums) {
    unordered_map<int, int> tmap; // map running tmap to its first index
    // prefix sum
    int presum = 0;
    // maximum lenght
    int maxLen = 0;
    // startingindex
    int s = -1;
    tmap[0] = -1; // initialize map with sum 0 at index -1
    for (int i = 0; i < nums.size(); i++) {
        // calculating the prefix sum
        presum += nums[i];
        // if preffix sum is find
        if (tmap.find(presum) != tmap.end()) {
            int len = i - tmap[presum];
            // if lenght is greater then preevious
            if ((len > maxLen) || (len == maxLen && tmap[presum] + 1 < s)) {
                maxLen = len;
                // updating the start
                s = tmap[presum] + 1;
            }
        } else {
            tmap[presum] = i;
        }
    }
    if (maxLen == 0) {
        return {-1};
    }
    return {s, s + maxLen - 1};
}

int main() {
    vector<int> nums = {2,3,1,-4,0,6};
    vector<int> subarray = largestSubarrayWithSumZero(nums);
    if (subarray[0] == -1) {
        cout << "No subarray with sum 0" << endl;
    } else {
        cout << "Subarray with sum 0: ";
        for (int i = subarray[0]; i <= subarray[1]; i++) {
            cout << nums[i] << " ";
        }
        cout << endl;
    }
    return 0;
}