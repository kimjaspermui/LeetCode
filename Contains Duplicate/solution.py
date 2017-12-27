class Solution(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """

        # this will keep track which elements have seen
        appeared = set()

        # for loop to iterate all elements
        for n in nums:

            # if not in the set then add it
            if n not in appeared:
                appeared.add(n)

            # otherwise return True since n has appeard before
            else:
                return True

        return False
