class Solution:
    def arrayPairSum(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        # sort the list first
        nums = sorted(nums)
                
        # get the sum by pairing them from the left
        tempSum = 0
        for i in range(0, len(nums), 2):
            tempSum += min(nums[i], nums[i+1])
            
        return tempSum