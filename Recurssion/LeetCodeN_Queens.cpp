/*********
 * 
 * class Solution {
public:
    bool valid(vector<string> &temp,int row,int col,int n){
        int  x = row;
        int y = col;
        // check top left diagonal
        while(row >= 0 && col >= 0){
            if(temp[row][col] == 'Q')return false;

            row--;
            col--;
        }

        col = y;
        row = x;
        // check current row
        while( col >= 0){
            if(temp[row][col] == 'Q')return false;

            col--;
        }

        col = y;
        row = x;
    
        // check left bottom diagonal
        while( row < n && col >= 0 ){
            if(temp[row][col] == 'Q')return false;

            row++;
            col--;
        }
        return true;
    }
    void solve(vector<vector<string>> &ans,vector<string> &temp,int col, int n){
        if(col == n){
            ans.push_back(temp);
            return;
        }

        for(int row = 0;row<n;row++){

            if(valid(temp,row,col,n)){
                temp[row][col] = 'Q';
                solve(ans,temp,col+1,n);
                temp[row][col] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> temp(n);

        string str(n,'.');

        for(int i = 0;i<n;i++){
            temp[i] = str;
        }

        solve(ans,temp,0,n);
        return ans;
    }
};
*/