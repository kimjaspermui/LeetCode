class Solution {
public:
    int countPrimes(int n) {
        
        // initialized the count to 0
        int count = 0;
        
        // initialized all numbers to false (is prime)
        vector<bool> notPrime(n, false);
        
        // for loop to iterate all numbers from 2 to 1 less than n
        for (int i = 2; i < n; i++) {
            
            // if this number is false at this point, it's a prime
            if (!notPrime[i]) {
                
                // increment prime count
                count++;
            
                // mark the multiples of this prime to true (not prime)
                for (int j = 2; i * j < n; j++) {

                    notPrime[i * j] = true;
                }
            }
        }
        
        return count;
    }
};