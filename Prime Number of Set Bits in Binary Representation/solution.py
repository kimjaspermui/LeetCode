class Solution:

    def countOnes(self, n):

        count = 0
        while n != 0:

            currBit = n & 1
            n = n >> 1

            if currBit == 1:
                count += 1

        return count

    def countPrimeSetBits(self, L, R):
        """
        :type L: int
        :type R: int
        :rtype: int
        """

        count = 0

        primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31}

        for i in range(L, R + 1):

            if self.countOnes(i) in primes:
                count += 1

        return count
