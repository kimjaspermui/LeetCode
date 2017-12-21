class Solution(object):
    def searchInsert(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """

        # this will keep track of low and high indices
        low = 0
        high = len(nums) - 1

        # loop invariant: target is between low to high
        while low <= high:

            # get the middle index for comparison
            mid = low + (high - low) / 2

            # general iteration: higher half or lower half
            # (if equal, low will keep going right until condition breaks)
            # last iteration: when low == high, low go to next index if
            # target is larger, otherwise, stay where it is at while making
            # high less than low to break out of the loop
            if nums[mid] < target:
                low = mid + 1
            else:
                high = mid - 1

        return low
