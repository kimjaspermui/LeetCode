class Solution(object):
    def mySqrt(self, x):
        """
        :type x: int
        :rtype: int
        """

        # edge case, for 1, then just return 1
        if x == 1:
            return 1

        # initialize the two ends with 0 and the original number
        low = 0
        high = x

        # binary search, loop until low and high are difference by 1
        while low + 1 != high:

            # get the mid number
            mid = low + (high - low) / 2

            # calculate its square
            square = mid * mid

            # if it is equal to the target then return mid
            if square == x:
                return mid

            # if larger then update high
            elif square > x:
                high = mid

            # otherwise, update low ()
            else:
                low = mid

        return low
