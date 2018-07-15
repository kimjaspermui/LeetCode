from collections import defaultdict
import numpy

class Solution:
    def advantageCount(self, A, B):
        """
        :type A: List[int]
        :type B: List[int]
        :rtype: List[int]
        """
        newA = [-1] * len(B)
        
        A = sorted(A)
        idxB = numpy.argsort(B)
        B = sorted(B)
        
        indexA = 0
        indexB = len(B)
        available = []
        
        for i, b in enumerate(B):
            while indexA < len(A) and A[indexA] <= b:
                available.append(A[indexA])
                indexA += 1
            
            if indexA == len(A):
                indexB = i
                break
            
            newA[idxB[i]] = A[indexA]
            indexA += 1

        index = 0
        while indexB < len(B):
            newA[idxB[indexB]] = available[index]         
            index += 1
            indexB += 1
        
        return newA