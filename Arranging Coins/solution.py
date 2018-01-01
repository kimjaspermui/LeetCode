class Solution:
    def arrangeCoins(self, n):
        """
        :type n: int
        :rtype: int
        """

        # indices from two ends
        low = 0
        high = (n + 1) / 2

        # keep looping while the indices are not crossed of each other
        while low < high:

            # get the middle step (ceiling cause low won't be stepping up)
            middle = math.ceil((high - low) / 2 + low)
            middleCount = (middle + 1) * middle / 2

            # return the step if it is exactly that many
            if middleCount == n:
                return middle

            # if it is lesser than n, then update low to middle
            elif middleCount < n:
                low = middle

            # otherwise, update high to 1 step lower than middle
            else:
                high = middle - 1

        return low
