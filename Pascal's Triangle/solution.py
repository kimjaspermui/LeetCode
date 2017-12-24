class Solution:
    def generate(self, numRows):
        """
        :type numRows: int
        :rtype: List[List[int]]
        """

        # empty list for 0 or negative row
        if numRows <= 0:
            return []

        myPascal = [[1]]

        # lists of list of 1 fow 1 row
        if numRows == 1:
            return myPascal

        # iterate from row 2 to last row
        for i in range(1, numRows):

            # initialize a temporary list with 1, 1 (first and last element)
            tempList = [1, 1]

            # iterate from first to second to last element of last row
            for j in range(0, len(myPascal[i-1]) - 1):

                # insert at second to last element of temp list with the sum
                # of two elements from previous list
                tempList.insert(-1, myPascal[i-1][j] + myPascal[i-1][j+1])

            # add the temporary list to the pascal list
            myPascal.append(tempList)

        return myPascal

        
