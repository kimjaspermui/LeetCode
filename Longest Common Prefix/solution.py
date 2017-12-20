class Solution:
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        # edge case, empty list, then return ""
        if len(strs) == 0:
            return ""

        # use first string as a base
        for i in range(len(strs[0])):

            # get the character of the first string
            currCharacter = strs[0][i]

            # check all other strings
            for s in strs[1:]:

                # if i is within the length of this string, keep checking
                if i < len(s):

                    # if ith character in s is not equal to current character
                    # then return the substring up to i (exclusive)
                    if s[i] != currCharacter:
                        return strs[0][:i]

                # otherwise, return the substring up to i (exclusive)
                else:
                    return strs[0][:i]

        # return the first string since it finished
        return strs[0]
