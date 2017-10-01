class Solution {
public:
    
    // this function will swap the given ints
    void swap(int& a, int& b) {
        
        int temp = a;
        a = b;
        b = temp;
    }
    
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        vector<int> returnVector;
        
        // iterate through the vector to swap those that are not in the
        // correct index
        for (int i = 0; i < nums.size(); i++) {
            
            int num = nums[i];
            int index = nums[i] - 1;
            
            // current value is not the index and the target index contains the same
            while (index != i && nums[index] != num) {

                swap(nums[i], nums[index]);

                index = nums[i] - 1;
                num = nums[i];
            }
        }
        
        // check which ones has the wrong value, then that's missing
        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] - 1 != i) {

                returnVector.push_back(i + 1);
            }
        }
        
        return returnVector;
    }
};