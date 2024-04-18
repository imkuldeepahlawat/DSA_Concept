class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int count = 0;

        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                if(grid[i][j] ==1){
                    // bottom out
                    if(i+1 >=grid.size() ){
                        count++;
                    }
                    // top out
                    if(i-1 <0) count++;
                    // right out
                    if(j+1 >=grid[i].size() ){
                        count++;
                    }
                    // left out
                    if(j-1 <0 )count++;
                    // right is 0
                    if(j+1 <grid[i].size() && grid[i][j+1] ==0)count++;
                    // left is 0
                    if(j-1 >=0 && grid[i][j-1] ==0)count++;
                    // bottom is 0
                    if(i+1 <grid.size() &&grid[i+1][j] ==0)count++;
                    // top is 0
                    if(i-1 >=0 &&grid[i-1][j] ==0)count++;
                }
                
            }
        }
        return count;
    }
};
