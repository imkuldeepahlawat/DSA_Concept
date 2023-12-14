class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {

        int m = grid.size();//rows
        int n = grid[0].size();//columns
        vector<int> countRow(m,0);
        vector<int> countCol(n,0);

        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                if(grid[i][j] == 1){
                    countRow[i]++;
                    countCol[j]++;
                }
            }
        }

        vector<vector<int>> diff(m,vector<int>(n,0));
        
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                int onesRowi = countRow[i];
                int onesColj = countCol[j];
                int zerosRowi = n-onesRowi;
                int zerosColj = m-onesColj;
                diff[i][j] = onesRowi + onesColj - zerosRowi - zerosColj;
            }
        }
        return diff;
    }
};