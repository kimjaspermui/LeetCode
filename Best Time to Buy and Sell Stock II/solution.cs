public class Solution {
    public int MaxProfit(int[] prices) {

        // initialize max profit to 0
        int maxProfit = 0;

        // for loop to iterate the entire array
        for (int i = 0; i < prices.Length - 1; i++) {

            // add the profit to maxProfit only if the next one is greater
            if (prices[i+1] > prices[i]) {

                maxProfit += prices[i+1] - prices[i];
            }
        }

        return maxProfit;
    }
}
