from collections import defaultdict

class Solution(object):
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """

        # if not equal length the return false
        if len(s) != len(t):
            return False

        # defaultdict to count frequency of characters
        myCharCount = defaultdict(int)

        # count the occurrences of each characters in s
        for c in s:
            myCharCount[c] += 1

        # loop through all characters in t
        for c in t:

            # if there is no more character in c return false
            if myCharCount[c] == 0:
                return False

            # otherwise, decrement the count of this character by 1
            else:
                myCharCount[c] -= 1

        return True
