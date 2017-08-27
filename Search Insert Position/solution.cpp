class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
     
        // this will keep track of the ends of range
        int min = 0;
        int max = nums.size() - 1;
        
        // case for empty vector, just return 0
        if (nums.size() == 0) {
            
            return 0;
        }
        
        // while loop until we reach equality or one step away from another
        while (min < max && min + 1 != max) {
            
            // get the middle
            int middle = min + (max - min) / 2;

            // case when target is smaller than middle, move max
            if (nums[middle] > target) {
                
                max = middle;
            }
            
            // case when target is larger than middle, move min
            else if (nums[middle] < target) {
                
                min = middle;
            }
            
            // case for equality, return the index
            else {
                
                return middle;
            }
        }
        
        // case when equal to min, then return the min (push it)
        if (nums[min] == target) {
            
            return min;
        }
        
        // case when equal to max, then return the max (push it)
        else if (nums[max] == target) {
            
            return max;
        }
        
        // case when it is smaller than min, then return the min
        if (target < nums[min]) {
            
            return min;
        }
        
        // case when it is between min and max, then return min + 1
        else if (target > nums[min] && target < nums[max]) {
            
            return min + 1;
        }
        
        // case when it is larger than max, then return max + 1
        else {
            
            return max + 1;
        }
    }
};