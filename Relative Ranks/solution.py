class Solution:
    def findRelativeRanks(self, nums):
        """
        :type nums: List[int]
        :rtype: List[str]
        """

        # this will store the output
        output = [""] * len(nums)

        # sort the scores with its index
        sortedNums = [(n, i) for i, n in enumerate(nums)]
        sortedNums = sorted(sortedNums)
        sortedNums.reverse()

        # iterate through the list to assign output
        for i, t in enumerate(sortedNums):

            # Gold, Silver, Bronze for first three then others
            if i + 1 == 1:
                output[t[1]] = "Gold Medal"
            elif i + 1  == 2:
                output[t[1]] = "Silver Medal"
            elif i + 1  == 3:
                output[t[1]] = "Bronze Medal"
            else:
                output[t[1]] = str(i + 1)

        return output
