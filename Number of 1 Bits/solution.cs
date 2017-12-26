public class Solution {
    public int HammingWeight(uint n) {

        // this will count the number of 1s so far
        int count = 0;

        // while n is not 0, keep looping
        while (n != 0) {

            // if & with 1 is 1, then count it
            uint temp = n & 1;
            if (temp == 1) {

                count++;
            }

            // shift n to right by 1 to examine next bit
            n = n >> 1;
        }

        return count;
    }
}
