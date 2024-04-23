class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        if( n == 1)return {0};

        unordered_map<int,vector<int>>adj;
        vector<int>indegree(n);
        vector<int>result;

        for(auto &node:edges){
            int u = node[0];
            int v = node[1];
            indegree[u]++;
            indegree[v]++;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        queue<int>qu;
        for(int i =0;i<n;i++){
            if(indegree[i] ==1){
                qu.push(i);
            }
        }
        while(n>2){
            int size= qu.size();
            n -= size;
            while(size--){
                int leafn = qu.front();
                qu.pop();
                for(auto &v:adj[leafn]){
                    indegree[v]--;
                    if(indegree[v] ==1){
                        qu.push(v);
                    }
                }
            }

        }


        while(qu.size()){
            result.push_back(qu.front());
            qu.pop();
        }
        return result;
    }
};
