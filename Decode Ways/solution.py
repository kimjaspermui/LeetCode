class Solution:
    def numDecodings(self, s):
        """
        :type s: str
        :rtype: int
        """
        if s == "" or len(s) == 0:
            return 0
        
        n = len(s)
        
        solution = [0] * (n+1)
        solution[0] = 1
        solution[1] = 1 if s[0] != '0' else 0
        for i in range(2, n+1):
            first = int(s[i-1:i])
            second = int(s[i-2:i])
            if first <= 9 and first >= 1:
                solution[i] += solution[i-1]
            if second <= 26 and second >= 10:
                solution[i] += solution[i-2]
            
        return solution[n]