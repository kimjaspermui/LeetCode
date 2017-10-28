def checkPalindrome(low, high, s, start, maxLength):
    while low >= 0 and high < len(s) and s[low] == s[high]:
        low -= 1
        high += 1
    tempLength = high - low - 2 + 1
    if tempLength >= maxLength:
        return low + 1, tempLength
    else:
        return start, maxLength

class Solution(object):  
    def longestPalindrome(self, s):
        """
        :type s: str
        :rtype: str
        """
        start = 0
        maxLength = 0
        for i in range(0, len(s)):
            start, maxLength = checkPalindrome(i, i, s, start, maxLength)
            start, maxLength = checkPalindrome(i, i + 1, s, start, maxLength)
        return s[start:start + maxLength]
