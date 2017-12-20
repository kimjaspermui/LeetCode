class Solution {
    public int removeDuplicates(int[] nums) {

        // edge cases, when less than length 2, then return the length
        if (nums.length < 2) {

            return nums.length;
        }

        // this will keep track of the index to store the non-duplicate int
        int index = 1;
        int currInt = nums[0];

        // for loop to check all integers
        for (int i = 1; i < nums.length; i++) {

            // if it is not equal to the integer checking, then update
            if (nums[i] != currInt) {

                nums[index++] = nums[i];
                currInt = nums[i];
            }
        }

        // the last index is also the length
        return index;
    }
}
