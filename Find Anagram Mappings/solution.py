from collections import defaultdict

class Solution:
    def anagramMappings(self, A, B):
        """
        :type A: List[int]
        :type B: List[int]
        :rtype: List[int]
        """

        myMap = defaultdict(list)

        for i, e in enumerate(B):
            myMap[e].append(i)

        output = []

        for e in A:

            myList = myMap[e]

            output.append(myList[0])
            del myList[0]

        return output


        
