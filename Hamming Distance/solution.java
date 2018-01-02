class Solution {
    public int hammingDistance(int x, int y) {

        // XOR of x and y will have bits 1 to indicate difference
        // count the number of 1s
        return Integer.bitCount(x ^ y);
    }
}
