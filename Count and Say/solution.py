class Solution:
    def countAndSay(self, n):
        """
        :type n: int
        :rtype: str
        """

        # this will keep track of the previous and currentsequence
        previous = "1"
        current = previous

        # start from 1th until nth
        for i in range(1, n):

            # reset current, initialize current char and count
            current = ""
            currChar = previous[0]
            currCount = 0

            # iterate through previous' characters
            for c in previous:

                # if the character is not the currChar, update
                if c != currChar:
                    current += str(currCount) + currChar
                    currChar = c
                    currCount = 0

                # otherwise, just update the count
                currCount += 1

            # update current with the last track, then update previous
            current += str(currCount) + currChar
            previous = current

        return current
