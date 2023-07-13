/***********************
 * 
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string>check;
        for(int i = 0;i<9;i++){
            for(int j = 0;j<9;j++){
                if(board[i][j] == '.') continue;
                string row = string(1,board[i][j])+"_row_"+to_string(i);
                string col = string(1,board[i][j])+"_col_"+to_string(j);
                string box = string(1,board[i][j])+"_box_"+to_string(i/3)+to_string(j/3);
                if(check.find(row) != check.end() || check.find(col) != check.end() || check.find(box) != check.end()){
                    return false;
                }
                check.insert(row);
                check.insert(col);
                check.insert(box);
            }
        }
        return true;
    }
};
*/


/******************
 * bruteforce
 * class Solution {
public:
    bool travers(vector<vector<char>>& grid,int sr,int er,int sc,int ec){

        unordered_set<char>check;
        for(int i = sr;i<=er;i++){
            for(int j = sc;j<=ec;j++){
                if(grid[i][j] == '.') continue;

                if(check.find(grid[i][j]) != check.end()){
                    return false;
                }
                check.insert(grid[i][j]);
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& grid) {
        // for check row
        for(int row =0;row<9;row++){
            unordered_set<char>check;
            for(int col =0;col<9;col++){
                if(grid[row][col] == '.') continue;
                if(check.find(grid[row][col]) != check.end()){
                    return false;
                }
                check.insert(grid[row][col]);
            }
        }
        // for column
        for(int col =0;col<9;col++){
            unordered_set<char>check;
            for(int row =0;row<9;row++){
                if(grid[row][col] == '.') continue;
                
                if(check.find(grid[row][col]) != check.end()){
                    return false;
                }
                check.insert(grid[row][col]);
            }
        }

        // for boxes
        for(int sr = 0;sr<9;sr+=3){
            int er = sr+2;
            for(int sc = 0;sc<9;sc+=3){
                int ec = sc+2;
                
                if(!travers(grid,sr,er,sc,ec)){
                    return false;
                }
            }
        }

        return true;
    }
};
*/