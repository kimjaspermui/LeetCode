class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """

        # no profit for less than 2 elements
        if len(prices) < 2:
            return 0

        # current min stock and max profit
        minStock = prices[0]
        maxProfit = 0

        # for loop to iterate the entire prices
        for i in range(1, len(prices)):

            # get the current price
            currPrice = prices[i]

            # if it is less than min stock then update it
            if currPrice <= minStock:
                minStock = currPrice

            # otherwise get the difference and see if it is greater
            # than current max profit
            else:
                diff = currPrice - minStock

                if diff > maxProfit:
                    maxProfit = diff

        return maxProfit
