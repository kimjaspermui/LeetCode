class Solution {
    public void rotate(int[][] matrix) {
        
        // variable temp for temporary data
        int temp = 0;
        
        // for loop to swap the symmetry
        for (int i = 0; i < matrix.length; i++) {
            
            for (int j = 0; j < i; j++) {
                
                temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }

        // reverse the array
        for (int i = 0; i < matrix.length; i++) {
            
            int j = 0;
            int k = matrix.length - 1;
            
            while (j < k) {
                
                temp = matrix[i][j];
                matrix[i][j] = matrix[i][k];
                matrix[i][k] = temp;
                
                j++;
                k--;
            }
        }
    }
}