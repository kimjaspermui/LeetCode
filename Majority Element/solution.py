class Solution:
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """

        # try the first element as majority
        majority = nums[0]
        count = 1

        # for loop to iterate all elements
        for i in range(1, len(nums)):

            # count is 0, then we need to update the new majority
            if count == 0:
                count += 1
                majority = nums[i]

            # it's the current majority, increment the count
            elif majority == nums[i]:
                count += 1

            # otherwise, decrement the count
            else:
                count -= 1

        # note that majority is more than half of the list, so the worst case
        # is that it is alternating with other elements, but majority has more
        return majority
