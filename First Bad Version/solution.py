# The isBadVersion API is already defined for you.
# @param version, an integer
# @return a bool
# def isBadVersion(version):

class Solution(object):
    def firstBadVersion(self, n):
        """
        :type n: int
        :rtype: int
        """

        # indices from two ends
        low = 1
        high = n

        # keep looping while low is still lower than high
        while low < high:

            # get the middle in between
            middle = (high - low) / 2 + low

            # if it is a bad version move the higher version to middle
            if isBadVersion(middle):
                high = middle


            # if not then move low to the next of middle
            else:
                low = middle + 1

        return low
