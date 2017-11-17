class Solution:
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        # initialize maxProfit to 0
        maxProfit = 0
        
        # initialize minimum stock from previous elements to maximum int
        minStock = sys.maxsize
        
        # for loop to iterate all stocks
        for p in prices:
            # if p is less than current min, then update it
            if p < minStock:
                minStock = p
                
            # otherwise, get the difference from the current min, then
            # update the max profit if it's larger
            else:
                diff = p - minStock
                if diff > maxProfit:
                    maxProfit = diff

        return maxProfit