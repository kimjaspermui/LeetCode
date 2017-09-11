class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
        // intialized the vector with the row size plus 1
        vector<int> output(rowIndex + 1, 0);
        
        // initialized the first element to 1
        output[0] = 1;
        
        // for loop to iterate each row
        for (int i = 0; i <= rowIndex; i++) {
            
            // for loop to update the elements by adding elements
            for (int j = i; j > 0; j--) {
                
                output[j] = output[j] + output[j - 1];
            }
        }
        
        return output;
    }
};