class Solution:
    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """

        # case for empty list, then just return 0
        if nums == []:
            return 0

        # current running sum and the max sum
        currSum = nums[0]
        maxSum = currSum

        # start from second element, check new sums
        for i in range(1, len(nums)):

            # if current number is larger than previous sum
            # plus current number, then start from there
            currSum = max(currSum + nums[i], nums[i])

            # update max sum if necessary
            maxSum = max(maxSum, currSum)

        return maxSum
