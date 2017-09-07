class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        // this will keep track of the maximum index reachable
        int max = 0;
        
        // for loop to iterate all elements
        for (int i = 0; i < nums.size(); i++) {
            
            // get the current value and the maximum index it can reach from here
            int value = nums[i];
            int tempMax = i + value;
            
            // update the max if tempMax is larger
            max = (max < tempMax) ? tempMax : max;
            
            // when max is at this current index, then return false cause max index has been reached
            if (max == i && i != nums.size() - 1) {
                
                return false;
            }
        }
        
        return true;
    }
};