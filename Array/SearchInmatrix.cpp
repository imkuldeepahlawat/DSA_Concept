/**
 * class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        for(int i = 0;i<row;i++){
            for(int j = 0; j<col;j++){
                if(matrix[i][j] == target){
                    return true;
                }
            }
        }
        return false;
    }
};
n^2 Solution
*/

/**
 * binary search
 * int row = arr.size();
        int col = arr[0].size();
        int s = 0;
        int e = row*col-1;
        int mid = s +(e-s)/2;
        while(s<=e){
            int element = arr[mid/col][mid%col];
            if(element == target){
                return 1;
            }
            if( element < target){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
            mid = s+(e-s)/2;
        }
        return 0;
*/