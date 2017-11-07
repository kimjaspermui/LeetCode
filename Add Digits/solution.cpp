class Solution {
public:
    int addDigits(int num) {
                
        // while num is greater than 10 then keep making it small
        while (num >= 10) {
            
            // set tempSum to 0
            int tempSum = 0;
            
            // while not 0, add the least significant digit then divide by 10
            while (num != 0) {
                
                tempSum += num % 10;
                num /= 10;
            }
            
            // set num to a new number
            num = tempSum;
        }
        
        return num;
    }
};