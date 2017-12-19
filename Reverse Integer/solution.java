class Solution {
    public int reverse(int x) {

        // this will hold the reverseInterger, 64 bits
        long revInteger = 0;

        // while we haven't reached 0, keep looping
        while (x != 0) {

            // get the digit then update x
            int digit = x % 10;
            x /= 10;

            // update revInteger
            revInteger = revInteger * 10 + digit;
        }

        // if greater than the max int or smaller than min int, then return 0
        if (revInteger > 0x7FFFFFFF || revInteger < 0x80000000) {

            return 0;
        }

        return (int) revInteger;
    }
}
