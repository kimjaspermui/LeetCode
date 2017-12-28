class Solution {
    public boolean isPerfectSquare(int num) {

        // edge case, perfect square for 1
        if (num == 1) {

            return true;
        }

        // initialize low and high to 0 and num, using long to prevent overflow
        long low = 1;
        long high = num / 2;

        // keep searching until high is less than low
        while (low <= high) {

            // get the middle between low and high
            long middle = (high - low) / 2 + low;

            // get the square of the middle
            long square = middle * middle;

            // if equal to num, the it is a perfect square
            if (square == num) {

                return true;
            }

            // if square is higher than num, then decrease high
            else if (square > num) {

                high = middle - 1;
            }

            // otherwise, increase low
            else {

                low = middle + 1;
            }
        }

        // return false because perfect square wasn't able to verify
        return false;
    }
}
