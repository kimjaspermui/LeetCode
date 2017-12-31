class Solution:
    def intersection(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """

        # map to store elements from nums1, then result to store outputs
        nums1Map = dict()
        result = set()

        # store elements of nums1 to map
        for n in nums1:
            nums1Map[n] = 0

        # check membership of nums2 elements from nums1's map
        for n in nums2:
            if n in nums1Map:
                result.add(n)

        # convert the set to list
        return list(result)
