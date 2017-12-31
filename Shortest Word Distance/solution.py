class Solution:
    def shortestDistance(self, words, word1, word2):
        """
        :type words: List[str]
        :type word1: str
        :type word2: str
        :rtype: int
        """

        # this will keep track of the previous index and word
        currIndex = -1
        currWord = ""

        # this will keep track of minimum distance
        minDistance = len(words)

        for (i, w) in enumerate(words):

            # if it's either words then try to check distance
            if w == word1 or w == word2:

                # if current index is not -1 and current word is the other one,
                # check distance
                if currIndex != -1 and currWord != w:
                    minDistance = min(minDistance, i - currIndex)

                # update the current index and word all the time
                currIndex = i
                currWord = w

        return minDistance
