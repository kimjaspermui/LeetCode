class Solution {

    public void reverse(int[] nums, int low, int high) {

        // keep looping and swap while low is less than high index
        while (low < high) {

            // swap low and high indices
            int temp = nums[high];
            nums[high--] = nums[low];
            nums[low++] = temp;
        }
    }

    public void rotate(int[] nums, int k) {

        // get the length
        int length = nums.length;

        // nothing to rotate for less than 2 size
        if (nums.length < 2) {

            return;
        }

        // decrease k if it is greater than array length
        k = k % length;

        // get the number of second half to rotate
        int diff = length - k;

        // reverse first half, second half, then the whole
        reverse(nums, 0, diff - 1);
        reverse(nums, diff, length - 1);
        reverse(nums, 0, length -1);
    }
}
