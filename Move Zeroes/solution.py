class Solution:

    def zeroIndex(self, nums, start):
        '''this will find the next zero index from start'''

        # keep looping until a zero index has been found
        while start < len(nums) and nums[start] != 0:
            start += 1

        return start

    def nonZeroIndex(self, nums, start):
        '''this will find the next non-zero index from start'''

        # keep looping until a zero index has been found
        while start < len(nums) and nums[start] == 0:
            start += 1

        return start

    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: void Do not return anything, modify nums in-place instead.
        """

        # initialize the pointer to first zero and nonzero indices
        zeroIndex = self.zeroIndex(nums, 0)
        nonZeroIndex = self.nonZeroIndex(nums, 0)

        # keep looping while both indices are within the bounds
        while nonZeroIndex < len(nums) and zeroIndex < len(nums):

            # if non-zero index is greater then swap and update indices
            if nonZeroIndex > zeroIndex:
                nums[zeroIndex] = nums[nonZeroIndex]
                nums[nonZeroIndex] = 0

                # start from the next index of each other
                zeroIndex = self.zeroIndex(nums, zeroIndex + 1)
                nonZeroIndex = self.nonZeroIndex(nums, nonZeroIndex + 1)

            # otherwise find next non-zero index start from current non-zero index
            else:
                nonZeroIndex = self.nonZeroIndex(nums, nonZeroIndex + 1)
