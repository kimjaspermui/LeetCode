class Solution:
    def isStrobogrammatic(self, num):
        """
        :type num: str
        :rtype: bool
        """

        # true for empty string
        if len(num) == 0:
            return True

        # non-flippable and flippable
        invalid = {'2', '3', '4', '5', '7'}
        mapped = {'0': '0', '1': '1', '6': '9', '8': '8', '9': '6'}

        # for loop to iterate first half of the numbers
        for i in range(0, int(len(num) / 2)):

            # get the digit in character
            n1 = num[i]

            # if it is non-flippable, then return false
            if n1 in invalid:
                return False

            # otherwise, if its counterpart isn't the mapped element, return false
            else:
                if num[len(num) - 1 - i] != mapped[n1]:
                    return False

        # check the middle element if odd count
        if len(num) % 2 != 0:

            # get the middle element
            middle = num[int(len(num) / 2)]

            # if it is non=flippable then return false
            if middle in invalid:
                return False

            # otherwise, check flippable
            else:

                # can't flip by itself
                if middle == '6' or middle == '9':
                    return False

        return True
