class Solution {
public:
    bool isGood(vector<int>& arr) {
        map<int,int>mp;
        int n = arr.size();
        int maxi = INT_MIN;
        for(int i =0;i<n;i++){
            maxi = max(maxi,arr[i]);
            mp[arr[i]]++;
        }
        bool flag = false;
        int ele;
        for(auto it:mp){
            if(it.second > 1){
                flag = true;
                ele = it.first;
                break;
            }
        }
        
        if(flag == true){
            if(ele == n-1){
                if(maxi  == ele){
                    return true;
                }
            }else{
                // inx = 0;
                return false;
            }
        }
            // inx = 0;
        return false;
        
    }
    
};