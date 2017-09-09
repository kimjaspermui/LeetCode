class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        // this will keep track of the two ends
        int min = 0;
        int max = numbers.size() - 1;
        
        while (true) {
            
            // get the temporary sum
            int sum = numbers[min] + numbers[max];
            
            // when the current sum is lesser than the target then increment min
            if (sum < target) {
                
                min++;
            }
            
            // when the current sum is larger than the target then decrement max
            else if (sum > target) {
                
                max--;
            }
            
            // otherwise, we found the pair, so we return the indices
            else {
                
                vector<int> myVector = {min + 1, max + 1};
                return myVector;
            }
        }
        
        // a pair is guarantee, so it won't reach here
        return vector<int>();
    }
};