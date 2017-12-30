from collections import defaultdict

class Solution:
    def canPermutePalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """

        # this will store the counts of each character
        charCount = defaultdict(int)

        # count the number of occurences of each character
        for c in s:
            charCount[c] += 1

        # this will keep track if odd count has been encountered
        hasOdd = False

        # check all counts in the dictionary
        for k, v in charCount.items():

            # if odd, then return false if an odd count has seen
            if v % 2 != 0:
                if hasOdd:
                    return False
                hasOdd = True

        return True
