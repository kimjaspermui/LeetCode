class Solution:
    def median(self, l, length):
        '''this helper function will calculate the median of a list'''

        middle = length / 2

        # even case, get the average
        if length % 2 == 0:
            return (l[middle] + l[middle-1]) / 2.0

        # odd case, get the middle
        else:
            return l[middle]

    def noOverlap(self, l1, l2):
        '''this helper function will return the median of non-overlap lists'''
        '''l1's elements are smaller than l2's'''

        # even and odd cases combine, don't need to separate them, just need
        # to pass in correct length and list to median helper function

        # length of l1 is less than l2, take length of l1 from l2 to get
        # the length to calculate median using the helper function
        if len(l1) < len(l2):
            return median(l2, len(l2) - len(l1))

        # length of l2 is less than l1, add length of l2 to l1 to get
        # the length to calculate median using the helper function
        elif len(l1) > len(l2):
            return median(l1, len(l2) + len(l1))

        # equal case (only for even), returns the sum of end of l1 and begin
        # of l2 divide by 2
        else:
            return (l1[-1] + l2[0]) / 2.0

    def findMedianSortedArrays(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """

        # both are empty, then return 0.0
        if nums1 == [] and nums2 == []:
            return 0.0

        # num1 is empty then get the median from num2
        if nums1 == []:
            return median(nums2, len(nums2))

        # num2 is empty then get the median from num1
        if nums2 == []:
            return median(nums1, len(nums2))

        # non-overlap case, first list has smaller elements
        if nums1[-1] <= nums2[0]:
            return self.noOverlap(nums1, nums2)

        # non-overlap case, second list has smaller elements
        if nums2[-1] <= nums1[0]:
            return self.noOverlap(nums2, nums1)

        # overlap case (hard)
        #else:
