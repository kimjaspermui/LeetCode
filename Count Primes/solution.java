class Solution {
    public int countPrimes(int n) {

        // will count the number of primes
        int count = 0;

        // will store corresponding numbers that are not primes
        // initialize to false
        boolean[] notPrimes = new boolean[n];

        // for loop to iterate from 2 to n-1
        for (int i = 2; i < n; i++) {

            // false at this point, so it's a prime
            if (!notPrimes[i]) {

                // increment the count of primes
                count++;

                // set those numbers that are not primes (multiples of this prime)
                for (int j = 2; i * j < n; j++) {

                    notPrimes[i * j] = true;
                }
            }
        }

        return count;
    }
}
