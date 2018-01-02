public class Solution {
    public int PivotIndex(int[] nums) {

        // this will keep track of left and right sum from current pivot
        int left = 0;
        int right = 0;

        // add all integers in nums array
        foreach (int n in nums) {

            right += n;
        }

        // this will keep track of the previous pivot's value
        int previous = 0;

        // iterate all elements to try different pivot
        for (int i = 0; i < nums.Length; i++) {

            // subtract current pivot from right then add previous pivot to left
            right -= nums[i];
            left += previous;

            // if their sum is equal then pivot has been found
            if (left == right) {

                return i;
            }

            // update the previous pivot
            previous = nums[i];
        }

        return -1;
    }
}
