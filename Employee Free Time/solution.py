# Definition for an interval.
# class Interval:
#     def __init__(self, s=0, e=0):
#         self.start = s
#         self.end = e

class Solution:
    def employeeFreeTime(self, avails):
        """
        :type avails: List[List[Interval]]
        :rtype: List[Interval]
        """

        allIntervals = []

        for myIntervals in avails:
            for a in myIntervals:
                allIntervals.append((a.start, a.end))

        allIntervals.sort(key=lambda t: t[0])

        print(allIntervals)

        i = 0
        while i+1 < len(allIntervals):
            currInterval = allIntervals[i]
            nextInterval = allIntervals[i+1]

            if currInterval[1] >= nextInterval[0]:
                allIntervals[i] = (currInterval[0], max(currInterval[1], nextInterval[1]))
                del allIntervals[i+1]

            else:
                i += 1

        output = []
        i = 0

        while i+1 < len(allIntervals):

            currInterval = allIntervals[i]
            nextInterval = allIntervals[i+1]

            output.append((currInterval[1], nextInterval[0]))
            i += 1

        return output
        
