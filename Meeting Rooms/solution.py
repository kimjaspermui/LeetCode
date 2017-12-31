# Definition for an interval.
# class Interval(object):
#     def __init__(self, s=0, e=0):
#         self.start = s
#         self.end = e

class Solution(object):
    def canAttendMeetings(self, intervals):
        """
        :type intervals: List[Interval]
        :rtype: bool
        """

        # return true since a person can attend no meetings
        if (intervals == []):
            return True

        # sort by the start time in ascending order
        intervals.sort(key = lambda x: x.start)

        # initialized with the first element's end
        currEnd = intervals[0].end

        for i in intervals[1:]:

            # if the next start is less than previous end then can't attend all
            if i.start < currEnd:
                return False

            # update the end
            currEnd = i.end

        return True
