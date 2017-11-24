class Solution:
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        maxProfit = 0
        for i in range(len(prices) - 1):
            if prices[i+1] > prices[i]:
                maxProfit += prices[i+1] - prices[i]
        return maxProfit