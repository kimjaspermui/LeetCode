class Solution:
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """

        # initialize number to 0
        single = 0

        # A XOR A = 0, XOR is commutative
        for i in nums:
            single ^= i

        return single
