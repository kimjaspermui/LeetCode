class Solution(object):
    def isIsomorphic(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """

        # mapped are characters already mapped
        mapped = set()

        # charMap are corresponding mapped characters
        charMap = dict()

        # for loop to iterate all characters in both strings
        for (c1, c2) in zip(s, t):

            # if c1 hasn't been mapped then try to map it
            if c1 not in charMap:

                # if c2 is already mapped then return false
                if c2 in mapped:
                    return False

                # otherwise, map c1 to c2
                else:
                    charMap[c1] = c2
                    mapped.add(c2)

            # otherwise, check if c2 is the mapped char
            else:

                # if c2 is not the mapped char, then return false
                if c2 != charMap[c1]:
                    return False

        # return true since all char mapped uniquely and the same
        return True
