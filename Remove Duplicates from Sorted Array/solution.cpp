class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        // case when empty, just return 0 
        if (nums.size() == 0) {
            
            return 0;
        }
        
        // this will keep track the current number that we are checking for duplicate
        int currentNum = nums[0];
        
        // initialize the new length with 1
        int length = 1;
        
        // for loop to iterate all elements
        for (int i = 1, j = 1; i < nums.size(); i++) {
            
            // case when there is duplicate, grab the new number, update current number then
            // update the size
            if (currentNum != nums[i]) {
                
                currentNum = nums[i];
                nums[j++] = currentNum;
                length++;
            }
        }
        
        // return the new length
        return length;
    }
};