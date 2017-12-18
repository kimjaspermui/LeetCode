class Solution:
    def noOverlap(self, l1, l2):
        '''this function will return the median of non-overlap lists'''
        '''l1's elements are smaller than l2's'''

        # even case
        if (len(l1) + len(l2)) % 2 == 0:

            # length of l1 is less than l2, then take length of l1 from
            # l2 then divide by 2 to get the larger middle index in l2
            # taking the average of it with lesser index element to get
            # the median
            if len(l1) < len(l2):
                middle = (len(l2) - len(l1)) / 2
                return (l2[middle] + l2[middle-1]) / 2

            # length of l2 is less than l1, similar to above but get
            # the total length to get the middle index
            elif len(l1) > len(l2):
                middle = (len(l2) + len(l1)) / 2
                return (l1[middle] + l1[middle-1]) / 2

            # equal case, returns the sum of end of l1 and begin of l2
            # divide by 2
            else:
                return (l1[-1] + l2[0]) / 2.0

        # odd case
        else:

            # length of l1 is less than l2, then take length of l1 from
            # l2 then divide by 2 to get the index of median in l2
            if len(l1) < len(l2):
                return l2[(len(l2) - len(l1)) / 2]

            # length of l2 is less than l1, then add length of l2 to
            # l1 then divide by 2 to get the index of median in l1
            elif len(l1) > len(l2):
                 return l1[(len(l1) + len(l2)) / 2]

            # there won't be equal case

    def findMedianSortedArrays(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """
        # non-overlap case, first list has smaller elements
        if num1[-1] <= num2[0]:
            return self.noOverlap(num1, num2)

        # non-overlap case, second list has smaller elements
        elif num2[-1] <= num1[0]:
            return self.noOverlap(num2, num1)

        # overlap case (hard)
        else:

            
