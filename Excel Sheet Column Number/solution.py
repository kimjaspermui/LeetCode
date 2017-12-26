class Solution(object):
    def titleToNumber(self, s):
        """
        :type s: str
        :rtype: int
        """

        # sample: ABCD -> (((1) * 26 + 2) * 26 + 3) * 26 + 4

        # colNum will store the sum and multiplier will store current 26x value
        colNum = 0
        multiplier = 1

        # for loop to iterate characters from the end
        for i in range(-1, -1 - len(s), -1):

            # get the character's value using ascii code
            charValue = ord(s[i]) - ord('A') + 1

            # add the value multiply by current multiplier to column number
            colNum += multiplier * charValue

            # increase multiplier by 26 for next character
            multiplier *= 26

        return colNum
        
