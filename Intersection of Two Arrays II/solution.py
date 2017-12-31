from collections import defaultdict

class Solution:
    def intersect(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """

        # map to store elements from nums1, then result to store outputs
        nums1Map = defaultdict(int)
        result = list()

        # store elements of nums1 to map with its counts
        for n in nums1:
            nums1Map[n] += 1

        # check membership of nums2 elements from nums1's map
        for n in nums2:

            # if there is more count, then add to result and decrease the count
            if nums1Map[n] > 0:
                result.append(n)
                nums1Map[n] -= 1

        return result
