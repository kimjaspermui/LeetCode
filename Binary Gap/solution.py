class Solution:
    def binaryGap(self, N):
        """
        :type N: int
        :rtype: int
        """
        binary = bin(N)
        myMax = 0
        count = 0
                
        for b in binary[2:]:
            if b == '1':
                if count > myMax:
                    myMax = count 
                count = 1
                
            else:
                count += 1
        
        return myMax
        