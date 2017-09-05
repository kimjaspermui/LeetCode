class Solution {
public:
    
    // function to swap two int data
    void swap(int& a, int& b) {
        
        int temp = a;
        a = b;
        b = temp;
    }
    
    void rotate(vector<vector<int>>& matrix) {
        
        // align the rows by columns
        for (int i = 0; i < matrix.size(); i++) {
            
            // swap all symmetry
            for (int j = 0; j < i + 1; j++) {
                
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        
        // for loop to reverse the vectors
        for (int i = 0; i < matrix.size(); i++) {
            
            int j = 0;
            int k = matrix.size() - 1;
            
            // keep swapping as long as j is less than k
            while (j < k) {
                
                swap(matrix[i][j++], matrix[i][k--]);
            }
        }
    }
};