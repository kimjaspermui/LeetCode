public class Solution {
    public int GetSum(int a, int b) {

        int sum = a;

        // keep looping until no more carry
        while (b != 0) {

            // add without carries
            sum = a ^ b;

            // get the carries
            b = (a & b) << 1;

            // update a in case there is carry
            a = sum;
        }

        return sum;
    }
}
