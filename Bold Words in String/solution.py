class Solution:

    def insertBold(self, myString, begin, end):
        return myString[:begin] + "<b>" + myString[begin:end+1] + "</b>" + myString[end+1:]

    def getIntervals(self, myString, subString):

        intervals = list()

        i = myString.find(subString, 0)
        while i >= 0:
            intervals.append((i, i+len(subString)-1))
            i = myString.find(subString, i + 1)

        return intervals

    def boldWords(self, words, S):
        """
        :type words: List[str]
        :type S: str
        :rtype: str
        """

        allIntervals = []

        for w in words:
            allIntervals += self.getIntervals(S, w)

        allIntervals.sort(key=lambda t: t[0])


        i = 0
        while i+1 < len(allIntervals):
            currInterval = allIntervals[i]
            nextInterval = allIntervals[i+1]

            if currInterval[1] >= nextInterval[0]-1:
                allIntervals[i] = (currInterval[0], max(currInterval[1], nextInterval[1]))
                del allIntervals[i+1]

            else:
                i += 1

        shift = 0
        for (begin, end) in allIntervals:

            S = self.insertBold(S, begin+shift, end+shift)
            shift += 7

        return S
            
