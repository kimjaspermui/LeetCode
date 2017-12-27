public class Solution {

    // this function will return the sum square of the digits in n
    public int getSum(int n) {

        int sum = 0;

        // keep looping until n is 0
        while (n > 0) {

            // get the digit, square, add, then update n
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }

        return sum;
    }

    public bool IsHappy(int n) {

        // Floyd's Cycle Detection
        // initialize slow to n and fast to 1 step ahead
        int slow = n;
        int fast = getSum(n);

        // if slow doesn't meet fast and fast is not 1, keep looping
        while (slow != fast && fast != 1) {

            // slow: 1 step, fast: 2 steps
            slow = getSum(slow);
            fast = getSum(getSum(fast));
        }

        return fast == 1 ? true : false;
    }
}
