class Solution {
public:
    
    int squareDigits(int n) {
        
        int sum = 0;
        while (n > 0) {
            
            int temp = n % 10;
            sum += temp * temp;
            
            n = n / 10;
        }
        
        return sum;
    }
    
    bool isHappy(int n) {
        
        int singleStep = n;
        int doubleStep = n;
        
        do {
            
            singleStep = squareDigits(singleStep);
            doubleStep = squareDigits(doubleStep);
            doubleStep = squareDigits(doubleStep);
        } while (singleStep != doubleStep);
        
        if (singleStep == 1) {
            
            return true;
        }
        
        else {
            
            return false;
        }
    }
};