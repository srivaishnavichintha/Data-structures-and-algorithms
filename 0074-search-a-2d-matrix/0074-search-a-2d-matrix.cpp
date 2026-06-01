class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         int m = matrix.size(), n= matrix[0].size();

        for(int i=0; i<m-1; i++){
            if(target == matrix[i][0]) return true;
            else if(target >= matrix[i][0] && target <= matrix[i+1][0]){

                if(target == matrix[i][n-1]) 
                    return true;

                int low = 0, high = n-1;

                while(low<=high){
                    int mid = low + (high-low)/2;
                    if(matrix[i][mid] == target) 
                        return true;
                    else if(target < matrix[i][mid]) 
                        high = mid-1;
                    else 
                        low = mid+1;
                }
            }
        }

        if(target >= matrix[m-1][0] && target <= matrix[m-1][n-1]){
            if(target == matrix[m-1][0]) return true;

            int low = 0, high = n-1;

            while(low<=high){
                int mid = low + (high-low)/2;
                if(matrix[m-1][mid] == target) 
                    return true;
                else if(target < matrix[m-1][mid]) 
                    high = mid-1;
                else 
                    low = mid+1;
            }
        }
        return false;
    }
};