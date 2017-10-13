class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        
        // initialize the count
        int count = 0;
        
        // for loop to iterate through the list
        for (int i = 1; i < nums.size() && count <= 1; i++) {
            
            // if previous element is larger than current element then increment count
            if (nums[i - 1] > nums[i]) {
                
                count++;
                
                // if previous 2 elements is out of bounds or if it is less than
                // or equal to the current element then just lower previous to current
                if (i - 2 < 0 || nums[i - 2] <= nums[i]) {
                    
                    nums[i - 1] = nums[i];
                }
                
                // otherwise, increase current to previous (hopefully it's higher than 2 previous)
                else {
                    
                    nums[i] = nums[i - 1];
                }
            }
        }
        
        // true when count is 1 or lesser
        return count <= 1;
    }
};