class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        // case for empty array
        if (matrix.empty()) {
            
            return false;
        }
        
        // start from top right corner
        int row = 0;
        int col = matrix[0].size() - 1;
        
        // loop until out of bounds
        while (row < matrix.size() && col >= 0) {
            
            // get the current value
            int current = matrix[row][col];
            
            // if equal, found, return true
            if (target == current) {
                
                return true;
            }
            
            // if lesser, decrement column for lesser values
            else if (target < current) {
                
                col--;
            }
            
            // if greater, increment row for greater values
            else if (target > current) {
                
                row++;
            }
        }
        
        return false;
    }
};