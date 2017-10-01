class Solution {
public:
    
    // swap two integers
    void swap(int& a, int& b) {
        
        int temp = a;
        a = b;
        b = temp;
    }
    void wiggleSort(vector<int>& nums) {
        
        // iterate the entire vector to re-order
        for (int i = 1; i < nums.size(); i++) {
            
            // even: must be smaller than or equal to previous
            // odd: must be larger than or equal to previous
            // swap if not met
            if ((i % 2 == 0 && nums[i] > nums[i - 1]) || (i % 2 != 0 && nums[i] < nums[i - 1])) {
                
                swap(nums[i], nums[i - 1]);
            }
        }
    }
};