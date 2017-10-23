class Solution(object):
    def checkPalindrome(low, high, s, start, maxLength):
        while low >= 0 and high < len(s) and s[low] == s[high]:
            low -= 1
            high += 1
        tempLength = high - low -2 + 1
    
    def longestPalindrome(self, s):
        """
        :type s: str
        :rtype: str
        """
        
        