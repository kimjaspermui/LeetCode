class Solution:
    def maxArea(self, height):
        """
        :type height: List[int]
        :rtype: int
        """

        # these will keep track of the two ends indices
        low = 0
        high = len(height) - 1

        # this will keep track of the current max area
        maxArea = 0

        # while the indices haven't crossed, keep looping
        while low < high:

            # case when low index has lower height, then calculate
            # area based on that, increment the index because the lower
            # height is the only one that can create larger area
            if height[low] <= height[high]:
                tempArea = height[low] * (high - low)
                low += 1

            # case when high index has lower height, then do the opposite
            else:
                tempArea = height[high] * (high - low)
                high -= 1

            # update the max area if the current area is larger
            if tempArea > maxArea:
                maxArea = tempArea

        return maxArea
