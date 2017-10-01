class Solution {
public:
    bool isPowerOfThree(int n) {
        
        // make sure it's positive, and 1162261467 is 3^19 largest in int
        return (n > 0 && 1162261467 % n == 0);
    }
};