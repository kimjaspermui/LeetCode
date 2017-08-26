class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        // this will keep track of the new length
        int length = 0;
        
        // for loop to iterate through all elements
        for (int i = 0, j = 0; i < nums.size(); i++) {
            
            // when it is not the target, then grab the element to j
            // then increment the count
            if (nums[i] != val) {
                
                nums[j++] = nums[i];
                length++;
            }
        }
        
        return length;
    }
};