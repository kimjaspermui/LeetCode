class Solution {
public:
    int reverse(int x) {
        
        // way bigger than x for overflow check
        long long out = 0;
        
        // while there are digits in x
        while (x) {
            
            // make a space for the new digit then add the digit
            out = out * 10 + x % 10;
            
            // divide the x by 10 to take out a digit from right
            x = x / 10;
        }
        
        // check overflow of int before return
        return (out < INT_MIN || out > INT_MAX) ? 0 : out;
    }
};