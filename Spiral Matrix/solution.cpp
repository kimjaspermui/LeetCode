class Solution {
public:
    void iterate(vector<int>& out, vector<vector<int>>& matrix, int fixed, int index, int count, int direction) {
        
        for (int i = 0; i < count; i++) {
        
            switch (direction) {

                // going right
                case 0:
                    out.push_back(matrix[fixed][index++]);
                    break;

                // going down
                case 1:
                    out.push_back(matrix[index++][fixed]);
                    break;

                // going left
                case 2:
                    out.push_back(matrix[fixed][index--]);
                    break;

                // going up
                case 3:
                    out.push_back(matrix[index--][fixed]);
                    break;
            }
        }
    }
    
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        // vector to store all the output in spiral order
        vector<int> out;
        
        // get the sizes
        int m = matrix.size();
        
        // case for empty vector
        if (m == 0) {
            
            return vector<int>();
        }
        
        int n = matrix[0].size();
                
        // this will store the current information of direction and the location
        int currentDirection = 0;
        int currentRow = 0;
        int currentCol = 0;

        // loop until either of the size is 0
        while (n != 0 && m != 0) {
            
            switch (currentDirection) {
                    
                // going right
                case 0:
                    iterate(out, matrix, currentRow, currentCol, n, currentDirection);
                    currentCol += n - 1;
                    currentRow++;
                    m--;
                    break;
                
                // going down
                case 1:
                    iterate(out, matrix, currentCol, currentRow, m, currentDirection);
                    currentRow += m - 1;
                    currentCol--;
                    n--;
                    break;
                    
                // going left
                case 2:
                    iterate(out, matrix, currentRow, currentCol, n, currentDirection);
                    currentCol -= n - 1;
                    currentRow--;
                    m--;
                    break;
                    
                // going up
                case 3:
                    iterate(out, matrix, currentCol, currentRow, m, currentDirection);
                    currentRow -= m - 1;
                    currentCol++;
                    n--;
                    break;
            }
            
            currentDirection = (currentDirection + 1) % 4;
        }
        
        return out;
    }
};