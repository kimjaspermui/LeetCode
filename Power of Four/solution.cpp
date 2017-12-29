class Solution {
public:
    bool isPowerOfFour(int num) {

        // 1. must be greater than 0
        // 2. must be power of 2 and 4
        // 3. 2^(2k)-1 = 4^k-1 = (4-1)(4^(n-1) + 4^(n-2) + 4^(n-3) + … + 4 + 1)
        // 2^(2k+1)-1 = 2^2k * 2 - 1 can't be divided by 3
        return num > 0 && !(num & (num-1)) && !((num-1) % 3);
    }
};
