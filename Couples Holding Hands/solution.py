class Solution:

    def swap(self, a, b, row):

        temp = row[a]
        row[a] = row[b]
        row[b] = temp

        return row

    def minSwapsCouples(self, row):
        """
        :type row: List[int]
        :rtype: int
        """

        personIndex = dict()
        swapTimes = 0

        for i, p in enumerate(row):
            personIndex[p] = i

        for i in range(0, len(row), 2):

            first = row[i]
            second = row[i+1]

            if first % 2 == 0:
                if second != first + 1:
                    partnerIndex = personIndex[first+1]

                    row = self.swap(partnerIndex, i+1, row)
                    personIndex[second] = partnerIndex

                    swapTimes += 1

            else:
                if second != first - 1:
                    partnerIndex = personIndex[first-1]

                    row = self.swap(partnerIndex, i+1, row)
                    personIndex[second] = partnerIndex

                    swapTimes += 1

        return swapTimes
