class Solution {
public:
    void vis_neighbours(unordered_set<string>&vis,queue<string>&qu,string curr_value){
        for(int i = 0;i<4;i++){
            char oldState = curr_value[i];
            char inc = oldState=='9'?'0':oldState+1;
            char dec = oldState=='0'?'9':oldState-1;
            curr_value[i]= inc;
            if(vis.find(curr_value) ==vis.end()){
                qu.push(curr_value);
                vis.insert(curr_value);
            }
            curr_value[i]= dec;
            if(vis.find(curr_value) == vis.end()){
                qu.push(curr_value);
                vis.insert(curr_value);
            }
            curr_value[i] = oldState;
        }
    }
    int openLock(vector<string>& deadends, string target) {
        unordered_set<string> vis(begin(deadends),end(deadends));
        if(vis.find("0000") != vis.end())return -1;
        int level = 0;
        queue<string>qu;
        qu.push("0000");
        while(qu.size()){
            int currQuSize = qu.size();
            while(currQuSize--){
                if(qu.front() == target){
                    return level;
                }
                string curr_value =qu.front();
                vis_neighbours(vis,qu,curr_value);
                qu.pop();
            }
            level++;
        }



        return -1;
    }
};
