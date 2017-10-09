class Solution {
public:
    int hammingDistance(int x, int y) {
        
        // initialize the difference count to 0
        int diffCount = 0;
        
        // for loop to iterate 32 times (32 bits)
        for (int i = 0; i < 32; i++) {
            
            // get the first bit of each
            int xBit = x & 1;
            int yBit = y & 1;

            // shift right by 1
            x = x >> 1;
            y = y >> 1;
            
            // if not equal the increment the different bits count
            if (xBit != yBit) {
                
                diffCount++;
            }
        }
        
        return diffCount;
    }
};