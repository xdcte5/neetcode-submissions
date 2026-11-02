class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int colSize = matrix[0].size();
        int rowSize= matrix.size();
        int totalSize = colSize * rowSize;
        int lp=0;
        int rp=totalSize-1;
        int mid = lp+(rp-lp)/2;

        while (lp<=rp){
            int row = mid/colSize;
            int col = mid%colSize;

            if (matrix[row][col] == target){
                return true;
            }else if(matrix[row][col]<target){
                lp=mid+1;
                mid=lp+(rp-lp)/2;
            }else{
                rp=mid-1;
                mid=lp+(rp-lp)/2;
            }
        }
        return false;
    }
};
