class Solution:
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """

        # take out the trailing spaces at the end
        s = s.strip()

        # start from the end
        i = len(s) - 1

        # while not out of bounds and no space seen, decrement i
        while i >= 0 and s[i] != ' ':
            i -= 1

        # return the difference from the end to the index of
        # the first character of the last word
        return len(s) - (i+1)
