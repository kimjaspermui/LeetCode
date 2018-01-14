class Solution:
    def partitionLabels(self, S):
        """
        :type S: str
        :rtype: List[int]
        """

        lastIndex = dict()

        myPartitions = []

        for i, c in enumerate(S):
            lastIndex[c] = i

        currIndex = 0
        while currIndex < len(S):

            farthestIndex = lastIndex[S[currIndex]]

            endIndex = currIndex

            while endIndex < farthestIndex:
                endIndex += 1
                farthestIndex = max(lastIndex[S[endIndex]], farthestIndex)

            myPartitions.append(endIndex + 1 - currIndex)
            currIndex = endIndex + 1


        return myPartitions
