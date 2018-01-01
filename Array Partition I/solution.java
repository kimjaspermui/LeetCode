class Solution {
    public int arrayPairSum(int[] nums) {

        // the range of possible integers for this problem
        int[] freq = new int[20001];

        // count the frequencies of each int
        for (int n : nums) {

            freq[n + 10000]++;
        }

        // this will keep track of the sum and the odd term
        int sum = 0;
        boolean isOdd = true;

        // iterate all integers
        for (int i = 0; i < freq.length; i++) {

            // keep looping until there is no more count for this integer
            while (freq[i] > 0) {

                // if it is odd term then add it to sum
                if (isOdd) {

                    // add the original value
                    sum += i - 10000;
                }

                // flip the boolean value of isOdd
                isOdd = !isOdd;

                // decrement the count for this integer
                freq[i]--;
            }
        }

        // same as sort and picking the smaller one for each pair
        return sum;
    }
}
