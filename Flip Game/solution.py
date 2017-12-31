class Solution:
    def generatePossibleNextMoves(self, s):
        """
        :type s: str
        :rtype: List[str]
        """

        # this will store all valid moves
        output = []

        # for loop to iterate all char pairs
        for i in range(0, len(s) - 1):

            # get two chars
            firstChar = s[i]
            secondChar = s[i+1]

            # if both are + then change it to --
            if firstChar == '+' and secondChar == '+':
                output.append(s[:i] + "--" + s[i+2:])

        return output
