class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        // this will indicate carry from index 0
        bool isZero = false;
        
        // start from the end, add 1 until no 10
        for (int i = digits.size() - 1; i >= 0; i--) {
            
            digits[i] += 1;
            
            // case for carry
            if (digits[i] == 10) {
                
                digits[i] = 0;
                
                if (i == 0) {
                    
                    isZero = true;
                }
            }
            
            // otherwise, break
            else {
                
                break;
            }
        }
        
        // if the beginning is 10, then prepend a 1
        if (digits[0] == 10 || isZero) {
            
            digits[0] = 0;
            digits.insert(digits.begin(), 1);
        }
        
        return digits;
    }
};