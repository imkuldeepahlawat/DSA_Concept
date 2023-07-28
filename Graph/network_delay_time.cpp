/****
 * 
 * class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        
        unordered_map<int,vector<pair<int,int>>>adj;

        for(auto vec:times){
            int u = vec[0];
            int v = vec[1];
            int w = vec[2];

            // adj[v].push_back({u,w});
            adj[u].push_back({v,w});
        }

        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        vector<int>cost(n+1,INT_MAX);
        cost[k] = 0;
        pq.push({k,0});

        while(!pq.empty()){
            int node = pq.top().first;
            int t = pq.top().second;
            pq.pop();

            for(auto v:adj[node]){
                int adjNode = v.first;
                int time = v.second;
                if(t+time < cost[adjNode]){
                    cost[adjNode] = t+time;
                    pq.push({adjNode,t+time});
                }
            }
        }

        int ans = INT_MIN;

        for(int i = 1;i<=n;i++){
            ans = max(cost[i],ans);
        }

        return ans == INT_MAX ? -1:ans;
    }
};
*/