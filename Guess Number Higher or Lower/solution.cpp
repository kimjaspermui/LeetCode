// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        
        // initialize the parameters, low, high, middle, and result
        int low = 1;
        int high = n;
        int middle = (high - low) / 2 + low;
        int result = 0;
        
        // keep gussing until it's right, binary search style
        while ((result = guess(middle)) != 0) {
            
            // case for higher number
            if (result == 1) {
                
                low = middle + 1;
            }
            
            // case for lower number
            else if (result == -1) {
                
                high = middle - 1;
            }
            
            // recalculate middle
            middle = (high - low) / 2 + low;
        }
        
        return middle;
    }
};