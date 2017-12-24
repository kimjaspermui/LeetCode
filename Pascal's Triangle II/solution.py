class Solution(object):
    def getRow(self, rowIndex):
        """
        :type rowIndex: int
        :rtype: List[int]
        """

        # initialize a row with k+1 space (took care 0th and 1st rows)
        currRow = [1] * (rowIndex + 1)

        # for loop start from row 2
        for i in range(2, rowIndex+1):

            # start from the beginning of this row
            for j in range(len(currRow) - i, len(currRow) - 1):

                # update current element with the sum with the next element
                currRow[j] = currRow[j] + currRow[j+1]

        return currRow
