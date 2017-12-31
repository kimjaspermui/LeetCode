class Solution:
    def addDigits(self, num):
        """
        :type num: int
        :rtype: int
        """

        # keep looping while num is not single digit
        while num > 9:

            # temporary sum to store the new num
            tempSum = 0

            # keep adding the digits while num is not 0
            while num > 0:
                tempSum += num % 10
                num = int(num / 10)

            # update num
            num = tempSum

        return num
