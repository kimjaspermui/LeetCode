class Solution:
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        # defaultdict to store the previous seen numbers' index
        myMap = dict()

        # iterate through the list to find pair that matches the target
        for i, num in enumerate(nums):

            # get the wanted previous number
            previous = target - num

            # if it is in the map then return the indices
            if previous in myMap:
                return [myMap[previous], i]

            # otherwise, add in the number with its index
            else:
                myMap[num] = i
        
