from collections import defaultdict

class Solution:

    def checkFreq(self, pFreq, sFreq):
        '''this function will check perfect match of frequencies lists'''

        for p, s in zip(pFreq, sFreq):
            if p != s:
                return False

        return True

    def findAnagrams(self, s, p):
        """
        :type s: str
        :type p: str
        :rtype: List[int]
        """

        # start will store the first indices of anagrams
        start = []
        pFreq = [0] * 26

        # count the characters frequency in p
        for c in p:
            pFreq[ord(c) - ord('a')] += 1

        # indices of sliding window, high exclusive
        low = 0
        high = len(p)

        # current frequencies
        currFreq = [0] * 26

        # if high already pass length of s, then return empty
        if high > len(s):
            return []

        # otherwise, fill up the list with length from 0th index
        else:
            for c in s[:high]:
                currFreq[ord(c) - ord('a')] += 1

        # keep looping until high reaches the end length of s
        while high <= len(s):

            # check match
            if self.checkFreq(pFreq, currFreq):
                start.append(low)

            # break out of loop if high is out of range
            if high >= len(s):
                break

            # update frequencies
            currFreq[ord(s[low]) - ord('a')] -= 1
            currFreq[ord(s[high]) - ord('a')] += 1

            # update sliding window
            low += 1
            high += 1

        return start
