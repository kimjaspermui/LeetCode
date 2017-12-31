from collections import defaultdict

class Solution(object):
    def longestPalindrome(self, s):
        """
        :type s: str
        :rtype: int
        """

        # defaultdict to store the frequencies
        freq = defaultdict(int)

        # count the frequencies of each character
        for c in s:
            freq[c] += 1

        # start counting the max length
        count = 0
        hasOdd = False
        for k, v in freq.items():

            # if it is odd, check if already add odd, if so, decrement
            if v % 2 != 0:
                if hasOdd:
                    count -= 1
                hasOdd = True

            # add the frequency to count
            count += v

        return count
