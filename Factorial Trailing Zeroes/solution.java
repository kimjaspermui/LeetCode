class Solution {
    public int trailingZeroes(int n) {

        // trailling 0s came from 10 = 2 * 5, need to count
        // multiples of 5, 25, 125, ... and so on..
        return n == 0 ? 0 : n / 5 + trailingZeroes(n / 5);
    }
}
