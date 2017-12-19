class Solution:
    def checkPalindrome(self, s, i, j, longest, start):
        '''this helper function will check the longest palindrome starting'''
        '''from this middle'''

        # loop until not equal or out of bounds
        while i >= 0 and j < len(s) and s[i] == s[j]:
            i -= 1
            j += 1

        # get their difference, then minus 1 for one of the sides
        tempLength = j - i -1

        # if it is larger, then return updated values
        if tempLength > longest:
            return tempLength, i+1

        # otherwise, return the current values
        else:
            return longest, start

    def longestPalindrome(self, s):
        """
        :type s: str
        :rtype: str
        """

        # this will keep track of the start index of the longest substring and length
        start = 0
        longest = 0

        # for loop to iterate all indices starting from the second index
        for i in range(len(s)):
            longest, start = self.checkPalindrome(s, i, i, longest, start)
            longest, start = self.checkPalindrome(s, i, i+1, longest, start)

        return s[start:start+longest]
