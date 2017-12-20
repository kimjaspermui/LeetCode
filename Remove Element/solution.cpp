class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        // this will keep track where to store the elements
        int storeIndex = 0;

        // iterate all elements to take out all val
        for (int i = 0; i < nums.size(); i++) {

            // if it is not val then move the element to the storeIndex
            // otherwise, keep the storeIndex to skip val
            if (nums[i] != val) {

                nums[storeIndex++] = nums[i];
            }
        }

        // the storeIndex is also the length
        return storeIndex;
    }
};
