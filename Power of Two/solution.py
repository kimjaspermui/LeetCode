class Solution(object):
    def isPowerOfTwo(self, n):
        """
        :type n: int
        :rtype: bool
        """

        # n must be positive and only has a bit that is 1
        return n > 0 and not(n & (n - 1))
