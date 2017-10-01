class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        // make sure it's positive and that there's only 1 bit has 1
        return n > 0 && !(n & (n-1));
    }
};