class Solution {
public:
    int maxProfit(vector<int>& prices) {
     
        // return 0 when it's empty
        if (!prices.size()) {
            
            return 0;
        }
        
        // this will keep track of the minimum price for buy
        int min = prices[0];
        
        // this will keep track of the maximum difference
        int maxDiff = 0;
        
        // for loop to iterate all prices
        for (int i = 1; i < prices.size(); i++) {
            
            // when the price is lesser than min, update the min
            if (prices[i] < min) {
                
                min = prices[i];
            }
            
            // otherwise, update maxDiff if there's a larger difference
            else {
                
                maxDiff = maxDiff < prices[i] - min ? prices[i] - min : maxDiff;
            }
        }
        
        return maxDiff;
    }
};