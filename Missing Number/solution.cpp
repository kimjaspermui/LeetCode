class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        // boolean to indicate that n exists
        bool hasN = false;
        
        // for loop to iterate all elements and swap if necessary
        for (int i = 0; i < nums.size(); i++) {
            
            // while current element is not i, then swap with the target
            while (nums[i] != i) {
                
                int temp = nums[i];
                
                // if n then switch the boolean instead
                if (temp == nums.size()) {
                    
                    hasN = true;
                    break;
                }
                
                nums[i] = nums[temp];
                nums[temp] = temp;
            }
        }
        
        // if n is false, n is missing
        if (!hasN) {
            
            return nums.size();
        }
        
        // otherwise, return the one that doesn't match i
        else {
            
            for (int i = 0; i < nums.size(); i++) {
                
                if (nums[i] != i) {
                    
                    return i;
                }
            }
        }
    }
};